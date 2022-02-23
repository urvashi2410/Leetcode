/*
 * @lc app=leetcode id=628 lang=cpp
 *
 * [628] Maximum Product of Three Numbers
 */

// @lc code=start
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans1 = nums[n-1] * nums[n-2] * nums[n-3];
        int ans2 = nums[0] * nums[1] * nums[n-1];
        return max(ans1, ans2);
    }
};
// @lc code=end

