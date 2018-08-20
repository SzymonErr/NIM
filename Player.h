/*
 * Player.h
 *
 *  Created on: Aug 20, 2018
 *      Author: szymon
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <iostream>
#include <cstdlib>

class Player {
	static int playerID;
public:
	Player();
	virtual ~Player();
	int AskForMove();
	bool CheckIfValidMove(int move);

};

#endif /* PLAYER_H_ */
