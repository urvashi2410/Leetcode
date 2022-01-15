/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == ""){
            return 0;
        }
        int idx = haystack.find(needle);
        if(idx != string::npos){
            return idx;
        }
        return -1;
    }
};
// @lc code=end

