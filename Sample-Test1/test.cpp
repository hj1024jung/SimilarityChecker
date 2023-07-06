#include "pch.h"
#include "../Project2/SimilarityChecker.cpp"

TEST(TestSuiteBase, AlwaysPass)
{
	EXPECT_EQ(1, 1);
}

class TestFixture : public testing::Test
{
public:
};

TEST_F(TestFixture, t1)
{
	EXPECT_EQ(1, 1);
}
