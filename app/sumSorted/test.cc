#include "solution.h"
#include "gtest/gtest.h"

namespace {
    TEST(SumTests, Normal) {
        const int length(3);
        int bits[length] = {1, 3, 5};
        Result result = findSum(bits, length, 6);
        EXPECT_EQ(0, result.startIndex);
        EXPECT_EQ(2, result.endIndex);
    }

    TEST(SumTests, TargetSmallerThanFirst) {
        int bits[3] = {1, 3, 5};
        Result result = findSum(bits, 3, 0);
        EXPECT_EQ(-1, result.startIndex);
        EXPECT_EQ(-1, result.endIndex);
    }

    TEST(SumTests, TargetSmallerThanSecond) {
        int bits[3] = {1, 3, 5};
        Result result = findSum(bits, 3, 3);
        EXPECT_EQ(-1, result.startIndex);
        EXPECT_EQ(-1, result.endIndex);
    }
}