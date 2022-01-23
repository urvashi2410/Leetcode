/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element = nums[0];
        int count = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == element){
                count++;
            }
            else if(count == 0){
                element = nums[i];
            }
            else{
                count--;
            }
        }

        count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == element){
                count++;
            }
        }

        if(count > nums.size()/2){
            return element;
        }
        return -1;
    }
};
// @lc code=end

