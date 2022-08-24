/*
Given a string s, return the longest palindromic substring in s.
*/

class Solution {
public:
    string longestPalindrome(string s) {
        string ans;
        int n=s.size();
        vector<vector<int>> dp(n,vector<int> (n,0));
        int maxi=0;
        for(int k=0;k<n;k++) {
            for(int i=0,j=k;j<n;i++,j++) {
                if(i==j) dp[i][j]=1;
                else if(k==1) {
                    if(s[i]==s[j]) dp[i][j]=2;
                } else if (s[i]==s[j]) {
                    if(dp[i+1][j-1]>0) dp[i][j]=2+dp[i+1][j-1];
                }
                if(dp[i][j]) {
                    if(j-i+1>maxi){
                        maxi=j-i+1;
                        ans=s.substr(i,maxi);
                    }
                }
            }
        }
        return ans;
    }
};

/*
SAMPLE INPUT :
"babad"
"cbbd"
SAMPLE OUTPUT :
"bab"
"bb"
*/
