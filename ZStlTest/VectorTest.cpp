#include <gtest/gtest.h>
#include <ZStl/Vector.h>


using namespace zstl;

TEST(VectorTest, Constructors)
{
	TVector<int> actual;
	EXPECT_EQ(actual.Size(), 0);
	EXPECT_EQ(actual.Data(), nullptr);
}
