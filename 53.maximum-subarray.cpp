/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int curr_sum = 0;
        for(int i = 0; i < nums.size(); i++){
            curr_sum += nums[i];
            maxi = max(curr_sum, maxi);
            if(curr_sum < 0){
                curr_sum = 0;
            }
        }
        return maxi;
    }
};
// @lc code=end

