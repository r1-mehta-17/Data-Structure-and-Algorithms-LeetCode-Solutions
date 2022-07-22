/*
You are given an m x n grid where each cell can have one of three values:
 - 0 representing an empty cell,
 - 1 representing a fresh orange, or
 - 2 representing a rotten orange.
 
Every minute, any fresh orange that is 4-directionally adjacent to a rotten orange becomes rotten.
Return the minimum number of minutes that must elapse until no cell has a fresh orange. If this is impossible, return -1.
*/
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        bool change = false;
        int count = 2;
        while (1){
            for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid[i].size();j++){
                    if(grid[i][j]==count){
                        if(i!=0 && grid[i-1][j] == 1) {
                            grid[i-1][j] = grid[i][j]+1;
                            change = true;
                        }
                        if(i!=grid.size()-1 && grid[i+1][j] == 1) {
                            grid[i+1][j] = grid[i][j]+1;
                            change = true;
                        } 
                        if(j!=0 && grid[i][j-1] == 1) {
                            grid[i][j-1] = grid[i][j]+1;
                            change = true;
                        } 
                        if(j!=grid[i].size()-1 && grid[i][j+1] == 1 ) {
                            grid[i][j+1] = grid[i][j]+1;
                            change = true;
                        }
                    }
                }
            }
            if (change == false) 
                    break;
            change = false;
            count++;
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1) return -1;
            }
        }
        return count-2;
    }
};

/*
SAMPLE INPUT : 
[[2,1,1],[1,1,0],[0,1,1]]
SAMPLE OUTPUT : 
4
*/
