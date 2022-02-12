/*
 * @lc app=leetcode id=200 lang=cpp
 *
 * [200] Number of Islands
 */

// @lc code=start
class Solution {
public:
    void markIsland(vector<vector<char>>&grid, int i, int j, int row, int col){
        if(i < 0 || i >= row || j < 0 || j >= col || grid[i][j] != '1'){
            return;
        }

        grid[i][j] = '2';
        markIsland(grid, i+1, j, row, col);
        markIsland(grid, i-1, j, row, col);
        markIsland(grid, i, j+1, row, col);
        markIsland(grid, i, j-1, row, col);
    }

    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int noOfIslands = 0;

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(grid[i][j] == '1'){
                    markIsland(grid, i, j, row, col);
                    noOfIslands++;
                }
            }
        }
        return noOfIslands;
    }
};
// @lc code=end

