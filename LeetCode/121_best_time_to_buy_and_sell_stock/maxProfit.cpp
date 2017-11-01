// time complexity - O(n)
// space complexity - O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX, maxProfit = 0;
        for (auto &price : prices) {
            int maxProfitToday = price - minPrice;
            minPrice = min(minPrice, price);
            maxProfit = max(maxProfit, maxProfitToday);
        }
        return maxProfit;
    }
};