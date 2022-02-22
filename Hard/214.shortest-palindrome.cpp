/*
 * @lc app=leetcode id=214 lang=cpp
 *
 * [214] Shortest Palindrome
 */

// @lc code=start
class Solution {
public:
    int Pie_Table(string s){
        int i = 0;
        int j = 1;
        int n = s.size();
        
        vector<int>Pie(n);
        while(j < n){
            if(s[i] == s[j]){
                Pie[j] = i + 1;
                i++;
                j++;
            }
            else{
                if(i == 0){
                    Pie[j] = 0;
                    j++;
                }
                else{
                    i = Pie[i-1];
                }
            }
        }
        return Pie[n-1];
    }
    
    string shortestPalindrome(string s) {
        string temp = s;
        reverse(temp.begin(), temp.end());
        int n = s.size();
        string newString = s + "+" + temp;
        int common = Pie_Table(newString);
        int toTaken = n - common;
        return temp.substr(0, toTaken) + s;
    }
};
// @lc code=end

