/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution {
public:
    // int fib(int n) {
    //     if(n < 2){
    //         return n;
    //     }
    //     vector<int>dp(n+1, -1);
    //     dp[0] = 0;
    //     dp[1] = 1;
    //     for(int i = 2; i <= n; i++){
    //         dp[i] = dp[i-1] + dp[i-2];
    //     }
    //     return dp[n];
    // }
    
    void multiply(int M[2][2], int A[2][2]){
        int fvalue = M[0][0] * A[0][0] + M[0][1] * A[1][0];
        int svalue = M[0][0] * A[0][1] + M[0][1] * A[1][1];
        int tvalue = M[1][0] * A[0][0] + M[1][1] * A[1][0];
        int lvalue = M[1][0] * A[0][1] + M[1][1] * A[1][1];

        M[0][0] = fvalue;
        M[0][1] = svalue;
        M[1][0] = tvalue;
        M[1][1] = lvalue;
    }

    void powerOfMatrix(int M[2][2], int n){
        if(n == 0 || n == 1){
            return;
        }
        powerOfMatrix(M, n/2);
        multiply(M, M);

        if(n&1){
            int A[2][2] = {
                {1, 1},
                {1, 0}
            };
            multiply(M, A);
        }
    }

    int fib(int n) {
        if(n == 0 || n == 1){
            return n;
        }

        int M[2][2] = {
            {1, 1},
            {1, 0}
        };
        powerOfMatrix(M, n-1);
        return M[0][0];
    }
};
// @lc code=end

