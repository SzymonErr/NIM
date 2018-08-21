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
	virtual int AskForMove(int act_height);
	bool CheckIfValidMove(int move);

};

#endif /* PLAYER_H_ */
