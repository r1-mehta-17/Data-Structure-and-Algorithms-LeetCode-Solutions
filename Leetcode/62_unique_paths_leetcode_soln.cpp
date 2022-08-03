/*
There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.
Given the two integers m and n, return the number of possible unique paths that the robot can take to reach the bottom-right corner.
The test cases are generated so that the answer will be less than or equal to 2 * 109.
*/

class Solution {
public:
    int dpfn(int m,int n,vector<vector<int>> & dp) {
        if(m==0&&n==0) return dp[m][n];
        if(dp[m][n]!=0) return dp[m][n];
        if(m!=0 && n!=0) {
            dp[m][n] = dpfn(m-1,n,dp) + dpfn(m,n-1,dp);
        } else if (m==0) {
            dp[m][n] = dpfn(m,n-1,dp);
        } else if(n==0) {
            dp[m][n] = dpfn(m-1,n,dp);
        }
        return dp[m][n];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,0));
        dp[0][0] = 1;
        return dpfn(m-1,n-1,dp);
    }
};

/*
SAMPLE INPUT : 
3
7
3
2
SAMPLE OUTPUT : 
28
3
*/
