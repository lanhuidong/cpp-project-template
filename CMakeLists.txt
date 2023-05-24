cmake_minimum_required(VERSION 3.26)

project(Demo
    VERSION 1.0.0
    LANGUAGES C CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#conan配置
list(APPEND CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR})
list(APPEND CMAKE_PREFIX_PATH ${CMAKE_BINARY_DIR})

include(${CMAKE_SOURCE_DIR}/cmake/conan.cmake)

conan_cmake_configure(REQUIRES gtest/1.13.0
                      REQUIRES fmt/10.0.0
                      GENERATORS CMakeDeps
                      GENERATORS CMakeToolchain
                      IMPORTS "bin, *.dll -> ./bin"
                      IMPORTS "lib, *.dylib* -> ./bin"
                      OPTIONS *:shared=False)

conan_cmake_install(PATH_OR_REFERENCE .
                    BUILD missing
                    REMOTE conancenter)

find_package(fmt REQUIRED)

add_subdirectory(app)
add_subdirectory(geometry)

option(unit_test "Enable unit test" ON)

if(unit_test) 
    add_subdirectory(geometry-test)
endif()
