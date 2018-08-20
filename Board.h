/*
 * Board.h
 *
 *  Created on: Aug 20, 2018
 *      Author: szymon
 */

#ifndef BOARD_H_
#define BOARD_H_

#include <iostream>
#include <cstdlib>

class Board {
	unsigned int tower_height;
	int actual_height;
public:
	Board();
	Board(int height);
	int AccessTowerHeight();
	int AccessActualHeight();
	void SetHeight(int new_height);
	void LowerActualHeight(int value);
	virtual ~Board();
};

#endif /* BOARD_H_ */
