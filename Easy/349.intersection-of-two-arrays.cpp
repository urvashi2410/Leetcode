/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        int m = nums1.size();
        int n = nums2.size();
        int i = 0;
        int j = 0;
        int prev = -1;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> ans;

        while (i < m && j < n){
            if (nums1[i] == nums2[j]){
                if (prev == -1 || prev != nums1[i]){
                    prev = nums1[i];
                    ans.push_back(nums1[i]);
                }
                i++;
                j++;
            }
            else if (nums1[i] > nums2[j]){
                j++;
            }
            else if (nums1[i] < nums2[j]){
                i++;
            }
        }
        return ans;
    }
};
// @lc code=end
