/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        int num = x;
        long int rev = 0;
        while(x > 0){
            int rem = x % 10;
            rev = rev*10 + rem;
            x /= 10;
        }
        if(num == rev){
            return true;
        }
        return false;
    }
};
// @lc code=end

