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

using namespace std;

int main() {
	Player player1;
	cout << "Hello World!" << endl;
	player1.AskForMove();
	return 0;
}


