/*
 * AI_test.cpp
 *
 *  Created on: Aug 21, 2018
 *      Author: szymon
 */

#include "../AI.h"
#include <gmock/gmock.h>
#include <gmock/internal/gmock-internal-utils.h>
#include <gtest/internal/gtest-internal.h>

class AI_test : public ::testing::Test
{
public:
	AI_test() : mTestObject(){
	}
	AI mTestObject;
};

TEST_F(AI_test, CheckIfGameOverTest){
	ASSERT_EQ(mTestObject.FindBestMove(15), 1);
}
