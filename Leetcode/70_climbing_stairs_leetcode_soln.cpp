/*
You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
*/

class Solution {
public:
    int fibo(int n, int dp[]) {
        if(n==0||n==1||n==2) return dp[n];
        if(dp[n]!=0) {
            return dp[n];
        }
        dp[n] = fibo(n-1,dp) + fibo(n-2,dp);
        return dp[n];
    }
    int climbStairs(int n) {
        if(n==1 || n==2 || n==0) return n;
        int dp[n+1];
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        for(int i=3;i<n+1;i++) {
            dp[i] = 0;
        }
        return fibo(n,dp);
    }
};

/*
SAMPLE INPUT :
2
3
10
SAMPLE OUTPUT : 
2
3
89
*/
