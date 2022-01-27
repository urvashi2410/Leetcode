/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */

// @lc code=start
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        int rem;
        for(int i = 0; i < 32; i++){
            rem = n % 2;
            if(rem & 1){
                count++;
            }
            n /= 2;
        }
        return count;
    }
};
// @lc code=end

