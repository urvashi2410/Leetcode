/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
public:
    int next(int n){
        int ans = 0;
        while(n){
            ans += pow(n%10, 2);
            n /= 10;
        }
        return ans;
    }
    
    bool isHappy(int n) {
        int slow = next(n);
        int fast = next(next(n));

        while(slow != fast){
            slow = next(slow);
            fast = next(next(fast));
        }

        if(slow == 1){
            return true;
        }
        return false;
    }
};
// @lc code=end

