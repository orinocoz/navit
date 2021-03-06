import QtQuick 2.0
import QtQuick.Controls 1.2
import QtQuick.Controls.Styles 1.2
import QtQuick.Layouts 1.1

Item {
    id: root
    property bool bold
    property bool _iconVisible: iconSource !== ''
    property alias text: buttonText.text
    property alias iconSource: imageItem.source
    property bool iconVisible: iconSource.toString().length !== 0
    property int iconWidth: theme.defButtonSize
    property int iconHeight: theme.defButtonSize
    property alias layout: rowLayout.layoutDirection
    property string iconType : ""

    height: 60

    function recalculateWidth() {
        var w = buttonText.contentWidth + 5
        if (iconVisible)
            w += imageItem.width
        if( awesomeItem.visible)
            w += awesomeItem.width
        root.width = w;
    }

    signal clicked

    Component.onCompleted: {
        recalculateWidth()
    }

    Rectangle {
        visible: false
        anchors.fill: parent
        color: "green"
    }

    Item {
        anchors.fill: parent

        Row {
            id: rowLayout
            anchors.fill: parent
            spacing: 5

            NText {
                id: buttonText
                font.bold: root.bold
                font.pixelSize: theme.defFontSize + 4
                Layout.fillWidth: true
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
                height: parent.height
                onTextChanged: {
                    recalculateWidth()
                }
            }

            NText {
                id: awesomeItem
                font.family: "FontAwesome"
                visible: (iconType === "arrow_right" || iconType === "arrow_left")
                text: (iconType === "arrow_left") ? "\uf104" : "\uf105"
                anchors.verticalCenter: parent.verticalCenter
                font.pixelSize: iconHeight
            }
            Image {
                id: imageItem
                visible: (iconType === "arrow_right" || iconType === "arrow_left") ? false : iconVisible
                anchors.verticalCenter: parent.verticalCenter
                sourceSize.width: iconWidth
                sourceSize.height: iconHeight
            }
        }
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            root.clicked()
        }
    }
}
