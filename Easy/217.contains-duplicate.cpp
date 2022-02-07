/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > set(nums.begin(), nums.end()).size();
    }
};
// @lc code=end

