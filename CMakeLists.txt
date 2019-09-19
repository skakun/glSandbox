cmake_minimum_required(VERSION 2.8)

project(mapainter)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_executable(mapainter src/main.cpp)
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
find_package(PkgConfig REQUIRED)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLFW_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS} )

target_link_libraries(mapainter glfw ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} ${GLFW_STATIC_LIBRARIES})
