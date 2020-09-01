cmake_minimum_required(VERSION 3.0.0)
project(mediaones VERSION 0.1.0)

add_subdirectory(./3rdparty/boost boost)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

include(CTest)
enable_testing()

add_executable(mediaones main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
