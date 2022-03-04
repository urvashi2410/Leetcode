/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */

// @lc code=start
class Solution {
public:
       int rob(vector<int>& nums){
           int n = nums.size();
           if(n == 0){
               return 0;
           }
           if(n == 1){
               return nums[0];
           }
           if(n == 2){
               return max(nums[0], nums[1]);
           }
           int dp[n];
           dp[0] = nums[0];
           dp[1] = max(nums[0], nums[1]);
           
           for(int i = 2; i < n; i++){
               dp[i] = max(nums[i] + dp[i-2], dp[i-1]);
           }
           return dp[n-1];
       }
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         if(n == 1){
//             return nums[0];
//         }
//         if(n == 2){
//             return max(nums[0], nums[1]);
//         }
        
//         int evenSum = 0;
//         int oddSum = 0;
//         for(int i = 0; i < n; i++){
//             if(i % 2){
//                 oddSum = max(oddSum + nums[i], evenSum);
//             }
//             else{
//                 evenSum = max(evenSum + nums[i], oddSum);
//             }
//         }
//         return max(evenSum, oddSum);
//     }
};
// @lc code=end

