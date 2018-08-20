/*
 * Gameplay_test.cpp
 *
 *  Created on: Aug 20, 2018
 *      Author: szymon
 */

#include "../Gameplay.h"
#include <gmock/gmock.h>
#include <gmock/internal/gmock-internal-utils.h>
#include <gtest/internal/gtest-internal.h>

class Gameplay_test : public ::testing::Test
{
public:
	Gameplay_test() : mTestObject(){
	}
	Gameplay mTestObject;
};

TEST_F(Gameplay_test, CheckIfGameOverTest){
	ASSERT_TRUE(mTestObject.CheckIfGameOver(0));
	ASSERT_FALSE(mTestObject.CheckIfGameOver(10));
}
