module_add_library(graphics_qt_qpainter ${CMAKE_CURRENT_BINARY_DIR}/RenderArea.moc RenderArea.cpp graphics_qt_qpainter.cpp)
qt5_use_modules(graphics_qt_qpainter Widgets OpenGL Gui)
QT5_GENERATE_MOC(RenderArea.h ${CMAKE_CURRENT_BINARY_DIR}/RenderArea.moc)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

