/*
 * AI.cpp
 *
 *  Created on: Aug 21, 2018
 *      Author: szymon
 */

#include "AI.h"

AI::AI(){
	std::cout << "AI constructor!" << std::endl;
}

AI::~AI(){
	std::cout << "AI destructor!" << std::endl;
}

int AI::AskForMove(int act_height){
	return FindBestMove(act_height);
}

int AI::minimax(int act_height, int depth, bool is_my_turn){

	int possible_moves[3] = {1,3,4};
	int score = 0;
	if (act_height == 0 && !is_my_turn)
		score = -100;
	if (act_height == 0 && !is_my_turn)
		score = 100;
	if (is_my_turn){
		int best = -1000;
		for (int i = 0; i < 3; i++){
			if (act_height >= possible_moves[i]){
				act_height -= possible_moves[i];
				best = ((best > minimax(act_height, depth+1, !is_my_turn))? best : minimax(act_height, depth+1, !is_my_turn));
				act_height += possible_moves[i];
			}
		}
		return best;
	}
	else{
		int best = 1000;
		for (int i = 0; i < 3; i++){
			if (act_height >= possible_moves[i]){
				act_height -= possible_moves[i];
				best = ((best < minimax(act_height, depth+1, !is_my_turn))? best : minimax(act_height, depth+1, !is_my_turn));
				act_height += possible_moves[i];
			}
		}
		return best;
	}

}

int AI::FindBestMove(int act_height){

	int best_value = -1000;
	int best_move = 0;
	int possible_moves[3] = {1,3,4};

	for (int i = 0; i < 3; i++){
		if (act_height >= possible_moves[i]){
			act_height -= possible_moves[i];
			int move_value = minimax(act_height, 0, false);
			act_height += possible_moves[i];

			if (move_value > best_value)
				best_move = possible_moves[i];
				best_value = move_value;
		}
	}

	std::cout << "The best move is: " << best_move << ". It's value is: " << best_value << std::endl;
	return best_move;
}
