/*
 * Gameplay.cpp
 *
 *  Created on: Aug 20, 2018
 *      Author: szymon
 */

#include "Gameplay.h"

Gameplay::Gameplay() : players(), myTower(25), actual_player(0), game_over(0){
	std::cout << "Gameplay constructor!" << std::endl;
}

Gameplay::~Gameplay(){
	std::cout << "Gameplay destroyer!" << std::endl;
}

void Gameplay::PlayerMove(){
	int move = 0;
	while(!game_over){
	move = players[actual_player].AskForMove();
	std::cout << "Player " << actual_player+1 << " move: " << move << std::endl;
	myTower.LowerActualHeight(move);
	game_over = CheckIfGameOver(myTower.AccessActualHeight());
	std::cout << "Act height: " << myTower.AccessActualHeight() << std::endl;
	actual_player += 1;
	actual_player = actual_player%2;
	}
}

bool Gameplay::CheckIfGameOver(int act_height){
	if (act_height == 0){
		std::cout << "GAME OVER!" << std::endl;
		std::cout << "PLAYER " << (actual_player + 1) << " WINS! " << std::endl;
		return true;
	}
	else if (act_height < 0){
		std::cout << "GAME OVER!" << std::endl;
		std::cout << "PLAYER " << (actual_player + 1)%2 + 1 << " WINS! " << std::endl;
		return true;
	}
	else return false;

}
