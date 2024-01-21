cmake_minimum_required(VERSION 3.28.1)
project(Raycasting-Engine)

# Set default build type if not specified
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
endif()

message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")


# Set source path
set(SOURCES src/main.c)

# Find OpenGL
find_package(OpenGL REQUIRED)

# Find GLFW3
find_package(glfw3 REQUIRED)

# Add your source files
add_executable(RaycastEngine ${SOURCES})

# Include directories
include_directories(${OPENGL_INCLUDE_DIR})
include_directories(modules/core)



# Add the glad library
add_library(glad STATIC external/glad/src/glad.c)

include_directories(
    ${OPENGL_INCLUDE_DIR}
    ${GLFW_INCLUDE_DIRS}
    external/glad/include
    src/modules/core
    # Add subdirectories here
)

# Link with OpenGL and GLFW
target_link_libraries(RaycastEngine PRIVATE OpenGL::GL glad glfw m)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
  add_compile_definitions(DEBUG)
endif()

message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")


