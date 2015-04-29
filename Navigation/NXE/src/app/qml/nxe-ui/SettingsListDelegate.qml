import QtQuick 2.0
import QtQuick.Controls 1.2
import QtQuick.Controls.Styles 1.2

Item {
    id: root
    width: settingsListView.width
    height: 50

    signal subMenuRequested(string url)
    signal clicked(string menuItem)
    signal valueChanged(string label, string value)

    MouseArea {
        anchors.fill: parent

        onClicked: {
            if (type === 'text') {
                if (option.currentOption === option.maxOptions - 1) {
                    option.currentOption = 0
                } else {
                    option.currentOption++
                }
            } else if (type === 'sublist') {
                console.debug('sublist clicked ', options.get(0).url)
                subMenuRequested(options.get(0).url);
            } else {
                root.clicked(mainTextItem)
            }
        }
    }
    Row {
        anchors.fill: parent

        Text {
            id: mainTextItem
            width: parent.width * 2 / 3
            height: parent.height
            verticalAlignment: Text.AlignVCenter
            text: itemText
            color: "white"
            font.pixelSize: 18
        }

        Item {
            width: parent.width - mainTextItem.width
            height: parent.height

            Text {
                id: option
                property int currentOption: 0
                property int maxOptions: options ? options.count : 0

                text: type === "text" ? options.get(currentOption).option : ""
                visible: type === "text"
                color: "white"
                width: parent.width
                height: parent.height
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignRight
                font.pixelSize: 16
                onTextChanged: root.valueChanged(mainTextItem.text, option.text)
            }

            Item {
                anchors.fill: parent

                NButton {
                    width: 16
                    height: 16
                    visible: type === "sublist"
                    anchors.right: parent.right
                    anchors.verticalCenter: parent.verticalCenter
                    iconSource: "next_icon_white.png"
                    iconWidth: 16
                    iconHeight: 16
                }
            }
        }
    }
    Rectangle {
        width: parent.width
        height: 1
        color: "#45a6c3"
        anchors.bottom: parent.bottom
    }
}