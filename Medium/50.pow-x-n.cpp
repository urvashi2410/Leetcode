/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        if(n == 0){
            return ans;
        }

        long long newN = n;
        if(newN < 0){
            newN = newN*(-1);
        }

        while(newN > 0){
            if(newN&1){
                ans *= x;
                newN--;
            }
            else{
                x = x*x;
                newN = newN >> 1;
            }
        }

        if(n < 0){
            ans = (double)(1.0) / (double)(ans);
        }
        return ans;
    }
};
// @lc code=end

