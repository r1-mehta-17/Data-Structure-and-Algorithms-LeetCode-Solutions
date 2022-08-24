/*
https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1
Given two strings. The task is to find the length of the longest common substring.
*/

class Solution{
    public:
    int longestCommonSubstr (string text1, string text2, int n, int m) {
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        int mx=0;
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0||j==0) dp[i][j]=0;
                else if(text1[i-1]==text2[j-1]) {
                    dp[i][j] = 1+dp[i-1][j-1];
                    mx = max(mx,dp[i][j]);
                }
            }
        }
        return mx;
    }
};

/*
SAMPLE INPUT :
6 6
ABCDGH
ACDGHR
SAMPLE OUTPUT :
4
*/
