class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2)  return 0;
        int minPrice = prices[0], maxProfit = 0;
        for (int i = 1; i < prices.size(); ++i) {
            int currProfit = prices[i] - minPrice , currPrice = prices[i];
            maxProfit = max(currProfit, maxProfit);
            minPrice = (minPrice > currPrice) ? currPrice : minPrice;
        }
        return maxProfit;
    }
};
