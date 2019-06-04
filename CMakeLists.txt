cmake_minimum_required(VERSION 3.13)
project(untitled)

link_directories(${CMAKE_SOURCE_DIR}/lib)

set(CMAKE_CXX_STANDARD 14)

include_directories(GL)
include_directories(${OPENGL_INCLUDE_DIR}  ${GLUT_INCLUDE_DIRS})

add_executable(untitled main.cpp src/Core.cpp src/Core.h src/sfx/sfxCore.cpp src/sfx/sfxCore.h src/graphics/Graphics.cpp src/graphics/Graphics.h)

target_link_libraries(untitled winmm.lib)
target_link_libraries(untitled glut32.lib)
target_link_libraries(untitled glut32.dll)
target_link_libraries(untitled glut32.lib)

#target_link_libraries(untitled4 SDL2.lib SDL2main.lib)