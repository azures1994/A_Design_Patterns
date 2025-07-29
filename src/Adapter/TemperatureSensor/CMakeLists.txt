cmake_minimum_required(VERSION 3.16.3)
project(Adapter_TemperatureSensor)

set(LIB_LIST )
set(SRC_LIST )

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC_LIST)
message(STATUS "[${PROJECT_NAME}]SRC_LIST: ${SRC_LIST}")

add_executable(${PROJECT_NAME} ${SRC_LIST})
target_link_libraries(${PROJECT_NAME} ${LIB_LIST})