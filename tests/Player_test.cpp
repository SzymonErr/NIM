/*
 * Player_test.cpp
 *
 *  Created on: Aug 20, 2018
 *      Author: szymon
 */

#include "../Player.h"
#include <gmock/gmock.h>
#include <gmock/internal/gmock-internal-utils.h>
#include <gtest/internal/gtest-internal.h>

class Player_test : public ::testing::Test
{
public:
	Player_test() : mTestObject(){
	}
	Player mTestObject;
};

TEST_F(Player_test, Move3ShouldBeTrue){
	ASSERT_TRUE(mTestObject.CheckIfValidMove(1));
	ASSERT_FALSE(mTestObject.CheckIfValidMove(2));
	ASSERT_TRUE(mTestObject.CheckIfValidMove(3));
	ASSERT_TRUE(mTestObject.CheckIfValidMove(4));
	ASSERT_FALSE(mTestObject.CheckIfValidMove(0));
}
