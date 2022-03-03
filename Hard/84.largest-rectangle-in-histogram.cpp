/*
 * @lc app=leetcode id=84 lang=cpp
 *
 * [84] Largest Rectangle in Histogram
 */

// @lc code=start
class Solution {
public:
    vector<int> NSL(vector<int> &heights){
        vector<int>ans;
        stack<pair<int, int>>s;

        for(int i = 0; i < heights.size(); i++){
            if(s.empty()){
                ans.push_back(-1);
            }
            else if(!s.empty() && s.top().first < heights[i]){
                ans.push_back(s.top().second);
            }
            else if(!s.empty() && s.top().first >= heights[i]){
                while(!s.empty() && s.top().first >= heights[i]){
                    s.pop();
                }

                if(s.empty()){
                    ans.push_back(-1);
                }
                else{
                    ans.push_back(s.top().second);
                }
            }
            s.push({heights[i], i});
        }
        return ans;
    }

    vector<int> NSR(vector<int> &heights){
        vector<int>ans;
        stack<pair<int, int>>s;

        int n = heights.size();

        for(int i = (n-1); i >= 0; i--){
            if(s.empty()){
                ans.push_back(n);
            }
            else if(!s.empty() && s.top().first < heights[i]){
                ans.push_back(s.top().second);
            }
            else if(!s.empty() && s.top().first >= heights[i]){
                while(!s.empty() && s.top().first >= heights[i]){
                    s.pop();
                }
                if(s.empty()){
                    ans.push_back(n);
                }
                else{
                    ans.push_back(s.top().second);
                }
            }
            s.push({heights[i], i});
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int>Start = NSL(heights);
        vector<int>End = NSR(heights);
        int n = heights.size();
        vector<int>areas(n);

        for(int i = 0; i < n; i++){
            areas[i] = (End[i] - Start[i] - 1) * heights[i];
        }

        int largestRect = INT_MIN;
        for(auto area : areas){
            largestRect = max(largestRect, area);
        }
        return largestRect;
    }
};
// @lc code=end

