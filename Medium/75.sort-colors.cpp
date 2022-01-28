/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Approach 1:
        // sort(nums.begin(), nums.end());

        // Approach 2 :
        // int count0 = 0;
        // int count1 = 0;
        // int count2 = 0;

        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] == 0){
        //         count0++;
        //     }
        //     else if(nums[i] == 1){
        //         count1++;
        //     }
        //     else{
        //         count2++;
        //     }
        // }

        // for(int i = 0; i < count0; i++){
        //     nums[i] = 0;
        // }

        // for(int i = count0; i < (count0 + count1); i++){
        //     nums[i] = 1;
        // }

        // for(int i = (count0 + count1); i < (count0 + count1 + count2); i++){
        //     nums[i] = 2;
        // }

        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int mid = 0;

        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
// @lc code=end

