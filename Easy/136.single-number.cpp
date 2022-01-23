/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int n : nums){
            result ^= n;
        }
        return result;
    }
};
// @lc code=end

