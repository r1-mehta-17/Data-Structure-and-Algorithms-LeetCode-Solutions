/*
Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.
An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.
*/

class Solution {
public:
    void con(vector<vector<char>> & grid,int i, int j) {
        if(grid[i][j] == '0') return; grid[i][j] = '2';
        if(i!=0 && grid[i-1][j] == '1') con(grid,i-1,j);
        if(j!=0 && grid[i][j-1] == '1') con(grid,i,j-1);
        if(i!=grid.size()-1 && grid[i+1][j] == '1') con(grid,i+1,j);
        if(j!=grid[i].size()-1 && grid[i][j+1] == '1') con(grid,i,j+1);
    }
    int numIslands(vector<vector<char>> & grid) {
        int count = 0;
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid[i].size();j++) {
                if(grid[i][j] == '1') {
                    count++;
                    con(grid,i,j);
                }
            }
        }
        return count;
    }
};

/*
SAMPLE INPUT : 
[["1","1","1","1","0"],["1","1","0","1","0"],["1","1","0","0","0"],["0","0","0","0","0"]]
[["1","1","0","0","0"],["1","1","0","0","0"],["0","0","1","0","0"],["0","0","0","1","1"]]
SAMPLE OUTPUT : 
1
3
*/
