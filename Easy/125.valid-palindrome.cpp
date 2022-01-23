/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        if(s == ""){
            return true;
        }
        int start = 0;
        int end = s.size();
        while(start < end){
            if(!isalnum(s[end])){
                end--;
                continue;
            }
            if(!isalnum(s[start])){
                start++;
                continue;
            }
            if(tolower(s[start++]) != tolower(s[end--])){
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

