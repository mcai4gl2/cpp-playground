#include "solution.h"
#include "gtest/gtest.h"

namespace {
    TEST(BitTests, OneBit) {
        int bits[3] = {1, 0, 0};
        EXPECT_EQ(true, isOneBit(bits, 3));
    }

    TEST(BitsTests, TwoBits) {
        int bits[4] = {1, 1, 1, 0};
        EXPECT_EQ(false, isOneBit(bits, 4));
    }
}