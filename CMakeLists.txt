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
add_library (player
Player.cpp
)
add_library (gameplay
Gameplay.cpp
)

# Add test cpp file
add_executable (board_test
	tests/Board_test.cpp
)
add_executable (player_test
	tests/Player_test.cpp
)
add_executable (gameplay_test
	tests/Gameplay_test.cpp
)

# Link test executables against gtest & gtest_main
target_link_libraries(board_test board gtest gtest_main)
target_link_libraries(player_test player gtest gtest_main)
target_link_libraries(gameplay_test gameplay gtest gtest_main)

target_link_libraries(gameplay board player)
target_link_libraries(NIM gameplay)

add_test(
	NAME board_test
	COMMAND check
)