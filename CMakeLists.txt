cmake_minimum_required(VERSION 2.8.11)

project(harmonia)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5Widgets)

SET(harmonia_SOURCES main.cpp mainwindow.cpp)
SET(harmonia_HEADERS mainwindow.h)

QT5_WRAP_UI(UIS_HDRS
	mainwindow.ui
)

# Tell CMake to create the harmonia executable
add_executable(harmonia WIN32 ${harmonia_SOURCES} ${UIS_HDRS})

# Use the Widgets module from Qt 5.
target_link_libraries(harmonia Qt5::Widgets)