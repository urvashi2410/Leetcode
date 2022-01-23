/*
 * @lc app=leetcode id=229 lang=cpp
 *
 * [229] Majority Element II
 */

// @lc code=start
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int element1 = -1;
        int count1 = 0;
        int element2 = -1;
        int count2 = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] == element1){
                count1++;
            }
            else if(nums[i] == element2){
                count2++;
            }
            else if(count1 == 0){
                element1 = nums[i];
                count1 = 1;
            }
            else if(count2 == 0){
                element2 = nums[i];
                count2 = 1;
            }
            else{
                count1--;
                count2--;
            }
        }

        count1 = 0;
        count2 = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == element1){
                count1++;
            }
            else if(nums[i] == element2){
                count2++;
            }
        }
        nums.clear();
        if(count1 > n/3){
            nums.push_back(element1);
        }
        if(count2 > n/3){
            nums.push_back(element2);
        }
        return nums;
    }
};
// @lc code=end

