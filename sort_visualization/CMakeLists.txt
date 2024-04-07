add_executable (sort_visualization "main.cpp"  "Program.cpp" "Program.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET sort_visualization PROPERTY CXX_STANDARD 20)
endif()

target_link_libraries (${PROJECT_NAME} PRIVATE sfml-graphics)
