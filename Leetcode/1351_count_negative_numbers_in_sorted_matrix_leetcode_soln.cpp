/*
Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.
*/

class Solution {
public:
    vector<vector<bool>> visit;
    int rec(int l, int r, vector<vector<int>> & grid) {  
        if(l<0 || r<0) return 0;
        if(grid[l][r]>=0) return 0;
        else {
            if(visit[l][r] == false) {
                int lside = rec(l-1,r,grid);
                int rside = rec(l,r-1,grid);
                visit[l][r] = true;
                return 1+lside+rside;
            } else {
                return 0;
            }
        }
    }
    int countNegatives(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++) {
            vector<bool> temp;
            for(int j=0;j<grid[0].size();j++) {
                temp.push_back(false);
            }
            visit.push_back(temp);
        }
        return rec(grid.size()-1,grid[0].size()-1,grid);
    }
};

/*
SAMPLE INPUT :
[[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
[[3,2],[1,0]]
SAMPLE OUTPUT :
8
0
*/
