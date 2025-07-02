project(Singleton)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC_LIST)
message(STATUS "[${PROJECT_NAME}]SRC_LIST: ${SRC_LIST}")

add_executable(Singleton ${SRC_LIST})
