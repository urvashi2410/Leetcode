/*
 * @lc app=leetcode id=844 lang=cpp
 *
 * [844] Backspace String Compare
 */

// @lc code=start
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string res1 = "";
        string res2 = "";

        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                res1 += s[i];
            }
            else if(!res1.empty()){
                res1.pop_back();
            }
        }

        for(int i = 0; i < t.size(); i++){
            if(t[i] >= 'a' && t[i] <= 'z'){
                res2 += t[i];
            }
            else if(!res2.empty()){
                res2.pop_back();
            }
        }

        if(res1.compare(res2) == 0){
            return true;
        }
        return false;
    }
};
// @lc code=end

