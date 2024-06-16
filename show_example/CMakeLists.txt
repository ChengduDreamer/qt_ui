add_executable(show_example_1 #WIN32
	show_example_1.cpp
	resources.qrc
)

target_link_libraries(show_example_1 ykqtui)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
	add_custom_command(
					TARGET show_example_1
					POST_BUILD
					COMMAND ${CMAKE_PREFIX_PATH}/bin/windeployqt.exe --debug show_example_1.exe 
					WORKING_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
	)
else()
	add_custom_command(
					TARGET show_example_1
					POST_BUILD
					COMMAND ${CMAKE_PREFIX_PATH}/bin/windeployqt.exe --release show_example_1.exe 
					WORKING_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
	)
endif()