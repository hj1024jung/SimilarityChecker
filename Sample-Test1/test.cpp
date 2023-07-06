#include "pch.h"
#include "../Project2/SimilarityChecker.cpp"

class TestFixture : public testing::Test
{
};

TEST_F(TestFixture, AlwaysPass)
{
	EXPECT_EQ(1, 1);
}

class SimilarityCheckerFixture : public testing::Test
{
public:
	SimilarityChecker checker;
};

TEST_F(SimilarityCheckerFixture, scoreExample5)
{
	EXPECT_EQ(40, checker.getScoreByAlpha("ASD", "DSA"));
}
TEST_F(SimilarityCheckerFixture, scoreExample6)
{
	EXPECT_EQ(0, checker.getScoreByAlpha("A", "BB"));
}
TEST_F(SimilarityCheckerFixture, scoreExample7)
{
	EXPECT_EQ(40, checker.getScoreByAlpha("AAABB", "BAA"));
}
TEST_F(SimilarityCheckerFixture, scoreExample8)
{
	EXPECT_EQ(20, checker.getScoreByAlpha("AA", "AAE"));
}