/*
The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
 - F(0) = 0, F(1) = 1
 - F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n)
*/

// Solution using DP :
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
    int fib(int n) {
        int dp[31];
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        for(int i=3;i<31;i++) {
            dp[i] = 0;
        }
        return fibo(n,dp);
    }
};

/*
SAMPLE INPUT : 
2
3
4
30
SAMPLE OUTPUT : 
1
2
3
832040
*/
