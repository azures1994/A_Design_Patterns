cmake_minimum_required(VERSION 3.10.0)
project(Design_Patterns VERSION 0.1.0 LANGUAGES C CXX)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin/)

add_executable(Design_Patterns main.cpp)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
