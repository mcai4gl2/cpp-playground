#include <vector>

int maxProfit(const std::vector<int> &prices) {
    auto maxProfit = 0;

    for (int minBuy = 0; minBuy < prices.size(); minBuy++) {
        for (int maxSell = minBuy + 1; maxSell < prices.size(); maxSell++) {
            auto profit = prices.at(maxSell) - prices.at(minBuy);
            if (maxProfit < profit) {
                maxProfit = profit;
            }
        }
    }

    return maxProfit;
}