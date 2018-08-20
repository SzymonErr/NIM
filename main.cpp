/*
 * main.cpp
 *
 *  Created on: Aug 20, 2018
 *      Author: szymon
 */

#include <iostream>
#include <cstdlib>
#include "Player.h"
#include "Board.h"
#include "Gameplay.h"

using namespace std;

int main() {
	Gameplay play;
	play.PlayerMove();
	cout << "Hello World!" << endl;
	return 0;
}


