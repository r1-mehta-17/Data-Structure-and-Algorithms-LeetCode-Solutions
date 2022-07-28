/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpro = 0;
        int mintillnow = 1e5;
        for(int i=0;i<prices.size();i++){
            mintillnow = min(mintillnow,prices[i]);
            maxpro = max(maxpro,prices[i]-mintillnow);
        }
        return maxpro;
    }
};

/*
SAMPLE INPUT : 
[7,1,5,3,6,4]
[7,6,4,3,1]
SAMPLE OUTPUT : 
5
0
*/
