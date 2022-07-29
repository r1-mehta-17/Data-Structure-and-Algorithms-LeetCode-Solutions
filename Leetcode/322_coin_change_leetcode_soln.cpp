/*
You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.
Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.
You may assume that you have an infinite number of each kind of coin.
*/

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,INT_MAX-1);
        dp[0] = 0;
        for(int i=1;i<=amount;i++){
            int mini=1e9;
            for(int j=0;j<coins.size();j++){
                if(i-coins[j]>=0) {
                    mini = min(mini,1+dp[i-coins[j]]);
                }
            }
            dp[i] = mini;
        }
        if(dp[amount] == 1e9) {
            return -1;
        }
        return dp[amount];
    }
};

/*
SAMPLE INPUT : 
[186,419,83,408]
6249
SAMPLE OUTPUT : 
20
*/
