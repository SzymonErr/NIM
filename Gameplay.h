/*
 * Gameplay.h
 *
 *  Created on: Aug 20, 2018
 *      Author: szymon
 */

#ifndef GAMEPLAY_H_
#define GAMEPLAY_H_

#include <iostream>
#include <cstdlib>
#include "Player.h"
#include "Board.h"

class Gameplay {
	Player players[2];
	Board myTower;
	int actual_player;
	bool game_over;
public:
	Gameplay();
	virtual ~Gameplay();
	void PlayerMove();
	bool CheckIfGameOver(int act_height);

};

#endif /* GAMEPLAY_H_ */
