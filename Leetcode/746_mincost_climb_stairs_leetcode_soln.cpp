/*
You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.
You can either start from the step with index 0, or the step with index 1.
Return the minimum cost to reach the top of the floor.
*/
class Solution {
public:
    int dpfn(vector<int> & cost, vector<int> & dp, int n) {
        if(n==1 || n==0) {
            return dp[n];
        }
        if(dp[n]!=0) {
            return dp[n];
        }
        int x1,x2;
        x2 = cost[n-2] + dpfn(cost,dp,n-2);
        x1 = cost[n-1] + dpfn(cost,dp,n-1);
        dp[n] = min(x1,x2);
        return dp[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n+1,0);
        dp[0]=0;
        dp[1]=0;
        return dpfn(cost,dp,n);
    }
};
/*
SAMPLE INPUT : 
[10,15,20]
[1,100,1,1,1,100,1,1,100,1]
SAMPLE OUTPUT :
15
6
*/
