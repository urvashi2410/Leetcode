/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int end = s.size() - 1;
        while(end >= 0 && s[end] == ' '){
            end--;
        }
        while(end >= 0 && s[end] != ' '){
            count++;
            end--;
        }
        return count;
    }
};
// @lc code=end

