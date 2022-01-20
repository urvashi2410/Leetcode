/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        unordered_map<char, char> m;
        m.insert(make_pair('(', ')'));
        m.insert(make_pair('{', '}'));
        m.insert(make_pair('[', ']'));
        if (s.length() % 2 == 1){
            return false;
        }
        for (int i = 0; i < s.size(); i++){
            if (st.empty()){
                st.push(s[i]);
            }
            else{
                char topElement = st.top();
                if (s[i] == '(' || s[i] == '{' || s[i] == '['){
                    st.push(s[i]);
                }
                else {
                    if (m[topElement] != s[i]){
                    return false;
                    }
                st.pop();
                }
            }
        }
        return (st.empty());
    }
};
// @lc code=end
