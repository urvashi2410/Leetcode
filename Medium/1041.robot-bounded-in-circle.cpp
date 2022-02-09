/*
 * @lc app=leetcode id=1041 lang=cpp
 *
 * [1041] Robot Bounded In Circle
 */

// @lc code=start
class Solution {
public:
    bool isRobotBounded(string instructions) {
        char currDir = 'N';
        int x = 0;
        int y = 0;

        for(int i = 0; i < instructions.size(); i++){

            if(instructions[i] == 'G'){
                y += (currDir == 'N')? 1 : 0;
                y -= (currDir == 'S')? 1 : 0;
                x += (currDir == 'E')? 1 : 0;
                x -= (currDir == 'W')? 1 : 0;
            }

            else{
                char ins = instructions[i];

                if(currDir == 'N'){
                    currDir = (ins == 'L')? 'W' : 'E';
                }
                else if(currDir == 'S'){
                    currDir = (ins == 'L')? 'E' : 'W';
                }
                else if(currDir == 'E'){
                    currDir = (ins == 'L')? 'N' : 'S';
                }
                else{
                    currDir = (ins == 'L')? 'S' : 'N';
                }
            }
        }
        if(x == 0 && y == 0 || currDir != 'N'){
            return true;
        }
        return false;
    }
};
// @lc code=end

