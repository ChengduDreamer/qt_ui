add_executable(test01 #WIN32
	test01.cpp
	${UI_SOURCES}
)

target_link_libraries(test01 Qt6::Widgets Qt6::Svg ykqtui)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
	add_custom_command(
					TARGET test01
					POST_BUILD
					COMMAND $ENV{CMAKE_PREFIX_PATH}/bin/windeployqt.exe --debug test01.exe 
					WORKING_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
	)
else()
	add_custom_command(
					TARGET test01
					POST_BUILD
					COMMAND $ENV{CMAKE_PREFIX_PATH}/bin/windeployqt.exe --release test01.exe 
					WORKING_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
	)
endif()