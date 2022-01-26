/*
 * @lc app=leetcode id=51 lang=cpp
 *
 * [51] N-Queens
 */

// @lc code=start
class Solution {
public:
    bool isValid(vector<string> &nqueen, int row, int col, int n){
        for(int i = 0; i <= row; i++){
            if(nqueen[i][col] == 'Q'){
                return false;
            }
        }

        for(int i = row-1, j = col-1; i >= 0 && j >= 0; i--,j--){
            if(nqueen[i][j] == 'Q'){
                return false;
            }
        }

        for(int i = row-1, j = col+1; i >= 0 && j < n; i--, j++){
            if(nqueen[i][j] == 'Q'){
                return false;
            }
        }
        return true;
    }
    void _solveNQueens(vector<vector<string>> &res, vector<string> &nqueen, int row, int n){
        if(row == n){
            res.push_back(nqueen);
            return;
        }

        for(int col = 0; col < n; col++){
            if(isValid(nqueen, row, col, n)){
                nqueen[row][col] = 'Q';
                _solveNQueens(res, nqueen, row + 1, n);
                nqueen[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>res;
        vector<string> nqueen(n, string(n, '.'));
        _solveNQueens(res, nqueen, 0, n);
        return res;
    }
};
// @lc code=end

