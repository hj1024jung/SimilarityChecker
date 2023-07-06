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

TEST_F(SimilarityCheckerFixture, scoreExample1)
{
	EXPECT_EQ(60, checker.getScoreByLength("ASD", "DSA"));
}
TEST_F(SimilarityCheckerFixture, scoreExample2)
{
	EXPECT_EQ(0, checker.getScoreByLength("A", "BB"));
}
TEST_F(SimilarityCheckerFixture, scoreExample3)
{
	EXPECT_EQ(20, checker.getScoreByLength("AAABB", "BAA"));
}
TEST_F(SimilarityCheckerFixture, scoreExample4)
{
	EXPECT_EQ(30, checker.getScoreByLength("AA", "AAE"));
}