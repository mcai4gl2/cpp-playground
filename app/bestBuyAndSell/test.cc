#include <vector>

#include "solution.h"
#include "gtest/gtest.h"

namespace {
    TEST(BestBuyAndSell, SinglePrice) {
        std::vector<int> inputs = {1};
        int actual = maxProfit(inputs);
        EXPECT_EQ(0, actual);
    }

    TEST(BestBuyAndSell, IncreasingPrice) {
        std::vector<int> inputs = {1, 2, 3, 4, 5};
        int actual = maxProfit(inputs);
        EXPECT_EQ(4, actual);
    }

    TEST(BestBuyAndSell, DecreasingPrice) {
        std::vector<int> inputs = {5, 4, 3, 2, 1};
        int actual = maxProfit(inputs);
        EXPECT_EQ(0, actual);
    }
}