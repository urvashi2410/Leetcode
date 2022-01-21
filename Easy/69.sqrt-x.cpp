/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        if(x == 0){
            return 0;
        }
        int low = 1, high = x;
        int ans;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(mid <= x/mid){
                low = mid + 1;
                ans = mid;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }
};
// @lc code=end

