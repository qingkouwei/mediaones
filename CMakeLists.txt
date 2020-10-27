cmake_minimum_required(VERSION 3.6)
set(CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}" CACHE PATH "Installation directory" FORCE)
message(STATUS "CMAKE_INSTALL_PREFIX=${CMAKE_INSTALL_PREFIX}")
add_subdirectory(./3rdparty/boost boost)

project(mediaones VERSION 0.1.0)


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

include_directories(3rdparty)

set(SELF_LIBS_OUT ${CMAKE_SYSTEM_NAME}.out)


add_executable(mediaones main.cpp)

set(CMAKE_FIND_LIBRARY_PREFIXES "lib")
    set(CMAKE_FIND_LIBRARY_SUFFIXES ".so" ".a")
target_link_libraries(mediaones
                    ${ones-boost}
                    )


