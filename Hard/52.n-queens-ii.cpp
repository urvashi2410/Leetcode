/*
 * @lc app=leetcode id=52 lang=cpp
 *
 * [52] N-Queens II
 */

// @lc code=start
class Solution {
public:
    bool isValid(vector<vector<int>> &res, int row, int col, int n){
        for(int i = 0; i <= row; i++){
            if(res[i][col] == 1){
                return false;
            }
        }

        for(int i = row-1, j = col-1; i >= 0 && j >= 0; i--, j--){
            if(res[i][j] == 1){
                return false;
            }
        }

        for(int i = row-1, j = col+1; i >= 0 && j < n; i--, j++){
            if(res[i][j] == 1){
                return false;
            }
        }
        return true;
    }
    
    void solveNQueen(vector<vector<int>>res, int &ans, int row, int n){
        if(row == n){
            ans++;
            return;
        }

        for(int col = 0; col < n; col++){
            if(isValid(res, row, col, n)){
                res[row][col] = 1;
                solveNQueen(res, ans, row + 1, n);
                res[row][col] = 0;
            }
        }
    }
    int totalNQueens(int n) {
        vector<vector<int>> res(n, vector<int>(n));
        int ans = 0;
        solveNQueen(res, ans, 0, n);
        return ans;
    }
};
// @lc code=end

