/*
 * @lc app=leetcode id=164 lang=cpp
 *
 * [164] Maximum Gap
 */

// @lc code=start
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        // Approach 1:
        // if(nums.size() < 2){
        //     return 0;
        // }
        
        // int ans = 0;
        // sort(nums.begin(), nums.end());
        // for(int i = 1; i < nums.size(); i++){
        //     int gap = nums[i] - nums[i - 1];
        //     ans = max(gap, ans);
        // }
        // return ans;

        // Approach 2:
        int n = nums.size();
        if(n < 2){
            return 0;
        }

        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i = 0; i < n; i++){
            maxi = max(nums[i], maxi);
            mini = min(nums[i], mini);
        }

        int interval = ceil((double)(maxi - mini)/(double)(n - 1));
        vector<int> bucketMax(n-1, INT_MIN);
        vector<int> bucketMin(n-1, INT_MAX);

        for(int i = 0; i < n; i++){
            int x = nums[i];

            if(x == maxi || x == mini){
                continue;
            }

            // index of the numbers according to the sorted array
            int idx = (nums[i] - mini)/interval;
            bucketMax[idx] = max(bucketMax[idx], nums[i]);
            bucketMin[idx] = min(bucketMin[idx], nums[i]);
        }

        int prev = mini;
        int ans = 0;

        for(int i = 0; i < n-1; i++){
            if(bucketMax[i] == INT_MIN && bucketMin[i] == INT_MAX){
                continue;
            }
            int gap = bucketMin[i] - prev;
            ans = max(gap, ans);
            prev = bucketMax[i];
        }

        return max(ans, maxi - prev);
    }
};
// @lc code=end

