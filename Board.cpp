/*
 * Board.cpp
 *
 *  Created on: Aug 20, 2018
 *      Author: szymon
 */

#include "Board.h"

Board::Board() : tower_height(0), actual_height(tower_height){
	std::cout << "Board() constructor!" << std::endl;
}

Board::Board(int height){
	tower_height = height;
	actual_height = height;
	std::cout << "Board(int) constructor!" << std::endl;
}

Board::~Board(){
	std::cout << "Board destructor!" << std::endl;
}

int Board::AccessTowerHeight(){
	return tower_height;
}

int Board::AccessActualHeight(){
	return actual_height;
}

void Board::SetHeight(int new_height){
	tower_height = new_height;
	actual_height = new_height;
}

void Board::LowerActualHeight(int value){
	actual_height -= value;
}
