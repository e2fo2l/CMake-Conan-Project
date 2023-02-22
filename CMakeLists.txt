cmake_minimum_required(VERSION 3.0)
project(TestProject VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)

include(${CMAKE_BINARY_DIR}/conan_toolchain.cmake)
conan_basic_setup()

set(SOURCES
  src/main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS})