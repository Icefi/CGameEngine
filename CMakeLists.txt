cmake_minimum_required(VERSION 3.18)

set(PROJECT_NAME cgame)

project(
  ${PROJECT_NAME}
  VERSION 1.0
  LANGUAGES C
)

list(
  APPEND
  CMAKE_MODULE_PATH
  ${CMAKE_CURRENT_LIST_DIR}/cmake
)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(external)
add_subdirectory(src)
