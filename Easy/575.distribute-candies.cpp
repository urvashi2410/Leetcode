/*
 * @lc app=leetcode id=575 lang=cpp
 *
 * [575] Distribute Candies
 */

// @lc code=start
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int noOfCandies = candyType.size();
        set<int>s;
        for(int i : candyType){
            s.insert(i);
        }
        int noOfVarieties = s.size();
        return min(noOfCandies/2, noOfVarieties);
    }
};
// @lc code=end

