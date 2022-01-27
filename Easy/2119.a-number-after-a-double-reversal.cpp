/*
 * @lc app=leetcode id=2119 lang=cpp
 *
 * [2119] A Number After a Double Reversal
 */

// @lc code=start
class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rem = num % 10;
        if(rem == 0){
            if(num == 0){
                return true;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

