/*
 * Board_test.cpp
 *
 *  Created on: Aug 20, 2018
 *      Author: szymon
 */

#include "../Board.h"
#include <gmock/gmock.h>
#include <gmock/internal/gmock-internal-utils.h>
#include <gtest/internal/gtest-internal.h>

class Board_test : public ::testing::Test
{
public:
	Board_test() : mTestObject(){
	}
	Board mTestObject;
};

TEST_F(Board_test, InitialTowerHeightShouldBe0){
	ASSERT_EQ(mTestObject.AccessTowerHeight(), 0);
}

TEST_F(Board_test, TowerHeightShouldBeSetted20){
	mTestObject.SetHeight(20);
	ASSERT_EQ(mTestObject.AccessTowerHeight(), 20);
	ASSERT_EQ(mTestObject.AccessActualHeight(), 20);
}

TEST_F(Board_test, ActualHeightShouldBeLoweredTo19){
	mTestObject.SetHeight(20);
	mTestObject.LowerActualHeight(1);
	ASSERT_EQ(mTestObject.AccessActualHeight(), 19);
}
