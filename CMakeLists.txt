cmake_minimum_required(VERSION 3.0)
project(TestProject VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

# Static link libgcc and libstdc++
if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  target_link_options(${PROJECT_NAME} PRIVATE -static-libgcc -static-libstdc++)
endif()

# Warnings
if(MSVC)
  target_compile_options(${PROJECT_NAME} PRIVATE /W4 /WX)
else()
  target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic -Werror)
endif()

# Sources
set(SOURCES
  src/main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS})