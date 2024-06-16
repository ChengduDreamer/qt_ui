cmake_minimum_required(VERSION 3.1.0)

set(CMAKE_PREFIX_PATH $ENV{QT_ROOT})

project(yk_qt_ui VERSION 1.0.1)

include(InstallRequiredSystemLibraries)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_definitions(-DUNICODE -D_UNICODE)

find_package(Qt6 COMPONENTS Widgets REQUIRED)
find_package(Qt6 COMPONENTS WebSockets REQUIRED)
find_package(Qt6 COMPONENTS Svg REQUIRED)
find_package(Qt6 COMPONENTS Core REQUIRED)
					

include_directories(
	${CMAKE_SOURCE_DIR}/uilib
)

set(UI_SOURCES
	${CMAKE_SOURCE_DIR}/uilib/yk_label.cpp
	${CMAKE_SOURCE_DIR}/uilib/yk_vbox_layout.cpp
	${CMAKE_SOURCE_DIR}/uilib/yk_hbox_layout.cpp
	${CMAKE_SOURCE_DIR}/uilib/yk_basic_button.cpp
	${CMAKE_SOURCE_DIR}/uilib/yk_img_button.cpp
	${CMAKE_SOURCE_DIR}/uilib/yk_text_button.cpp
)

add_library(ykqtui STATIC ${UI_SOURCES})

target_link_libraries(ykqtui Qt6::Widgets Qt6::Svg)

add_subdirectory(show_example)



