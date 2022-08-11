/*
You are given an integer array nums. You want to maximize the number of points you get by performing the following operation any number of times:
Pick any nums[i] and delete it to earn nums[i] points. Afterwards, you must delete every element equal to nums[i] - 1 and every element equal to nums[i] + 1.
Return the maximum number of points you can earn by applying the above operation some number of times.
*/

class Solution {
public:
    int rec(vector<int> map1, int dp[], int i) {
        if(i==0 || i==1 || i==2) return dp[i];
        if(dp[i]!=-1) return dp[i];
        dp[i] = max(max(rec(map1,dp,i-2)+map1[i],rec(map1,dp,i-1)),rec(map1,dp,i-3)+map1[i]);
        return dp[i];
    }
    int deleteAndEarn(vector<int>& nums) {
        vector<int> map1(1e4+1,0);
        int maxi = 0;
        for(int i=0;i<nums.size();i++) {
            map1[nums[i]]+=nums[i];
            if(maxi < nums[i]){
                maxi = nums[i];
            }
        }
        int dp[maxi+1];
        if(maxi==1) return map1[1];
        dp[0] = map1[0];
        dp[1] = map1[1];
        dp[2] = max(map1[2]+map1[0],map1[1]);
        for(int i=3;i<maxi+1;i++) {
            dp[i] = -1;
        }
        return rec(map1,dp,maxi);
    }
};

/*
SAMPLE INPUT : 
[3,4,2]
[2,2,3,3,3,4]
SAMPLE OUTPUT :
6
9
*/
