/*
 * AI.h
 *
 *  Created on: Aug 21, 2018
 *      Author: szymon
 */

#ifndef AI_H_
#define AI_H_

#include "Player.h"
#include "time.h"

class AI : public Player {
public:
	AI();
	virtual ~AI();
	virtual int AskForMove(int act_height);
	int minimax(int act_height, int depth, bool is_my_turn);
	int FindBestMove(int act_height);
};

#endif /* AI_H_ */
