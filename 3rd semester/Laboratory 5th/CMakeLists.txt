cmake_minimum_required(VERSION 2.8)

#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/bin)

include_directories(include gtest)

# BUILD
add_subdirectory(include)
add_subdirectory(test)
add_subdirectory(gtest)
