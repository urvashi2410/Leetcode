/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for(int i = 0; i < n; i++){
            minPrice = min(prices[i], minPrice);
            maxProfit = max(prices[i] - minPrice, maxProfit);
        }
        return maxProfit;
    }
};
// @lc code=end

