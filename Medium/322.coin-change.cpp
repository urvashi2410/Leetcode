/*
 * @lc app=leetcode id=322 lang=cpp
 *
 * [322] Coin Change
 */

// @lc code=start
class Solution {
public:
    // int getNumberOfCoins(vector<int> &coins, int amount, vector<int> &dp){
    //     int n = coins.size();
    //     if(amount == 0){
    //         return 0;
    //     }
    //     if(dp[amount] != 0){
    //         return dp[amount];
    //     }

    //     int ans = INT_MAX;

    //     for(int i = 0; i < n; i++){
    //         if(amount - coins[i] >= 0){
    //             int smallAns = getNumberOfCoins(coins, amount - coins[i], dp);
    //             ans = min(ans, smallAns+1);
    //         }
    //     }
    //     dp[amount] = ans;
    //     return ans;
    // }

    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1);
        return getNumberOfCoins(coins, amount, dp);
    }
};
// @lc code=end

