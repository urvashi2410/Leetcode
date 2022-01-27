/*
 * @lc app=leetcode id=190 lang=cpp
 *
 * [190] Reverse Bits
 */

// @lc code=start
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev = 0;
        for(int i = 0; i < 32; i++){
            int rem = n % 2;
            rev = (rev << 1) + rem;
            n /= 2;
        }
        return rev;
    }
};
// @lc code=end

