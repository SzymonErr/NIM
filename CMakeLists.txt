cmake_minimum_required(VERSION 2.6)
project(NIM)
add_executable(NIM main.cpp)

# Setup testing
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIR})

add_library (board
Board.cpp
)

# Add test cpp file
add_executable (board_test
	tests/Board_test.cpp
)

# Link test executables against gtest & gtest_main
target_link_libraries(board_test board gtest gtest_main)

add_test(
	NAME board_test
	COMMAND check
)