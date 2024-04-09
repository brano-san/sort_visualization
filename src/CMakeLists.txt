add_executable (${PROJECT_NAME} "main.cpp"  "Program.cpp" "Program.h" "Column.h" "Column.cpp" "ColumnArray.h" "ColumnArray.cpp")

set_target_properties (${PROJECT_NAME}
	PROPERTIES
	CXX_STANDARD 20
	CXX_STANDARD_REQUIRED ON
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET sort_visualization PROPERTY CXX_STANDARD 20)
endif()

target_link_libraries (${PROJECT_NAME} PRIVATE sfml-graphics)
