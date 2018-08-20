/*
 * Player.cpp
 *
 *  Created on: Aug 20, 2018
 *      Author: szymon
 */

#include "Player.h"

Player::Player(){
	std::cout << "Player constructor!" << std::endl;
	playerID++;
}

Player::~Player(){
	std::cout << "Player destructor!" << std::endl;
}

bool Player::CheckIfValidMove(int move){
	if (move == 1 || move == 3 || move == 4)
		return true;
	else return false;
}

int Player::AskForMove(){
	int move;
	std::cout << "Choose one of possible moves (1, 3 or 4): ";
	std::cin >> move;
	while (std::cin.fail() || !CheckIfValidMove(move)){
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "Wrong input. Choose 1, 3 or 4" << std::endl;
		std::cin >> move;
	}
	std::cout << "Your move: " << move << std::endl;
	return move;
}

int Player::playerID = 1;
