/*
The Tribonacci sequence Tn is defined as follows: 
T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.
Given n, return the value of Tn.
*/

class Solution {
public:
    int dp[40] = {0};
    int tribonacci(int n) {
        if(n==0){
            dp[n] = 0;
            return dp[n];
        }
        if(n==1) {
            dp[n] =1;
            return dp[n];
        }
        if(n==2) {
            dp[n] = 1;
            return dp[n];
        }
        if(dp[n]!=0) return dp[n];
        dp[n] = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
        return dp[n];
    }
};

/*
SAMPLE INPUT : 
4
25
SAMPLE OUTPUT : 
4
1389537
*/
