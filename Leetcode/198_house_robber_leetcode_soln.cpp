/*
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.
Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.
*/

class Solution {
public:
    int rec(int dp[],vector<int> & nums, int i) {
        if(i==0 || i==1 || i==2) return dp[i];
        if(dp[i]!=-1) return dp[i];
        dp[i] = max(max(rec(dp,nums,i-2)+nums[i],rec(dp,nums,i-1)),rec(dp,nums,i-3)+nums[i]);
        return dp[i];
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[0],nums[1]);
        int dp[101] = {-1};
        dp[0] = nums[0];
        dp[1] = nums[1];
        dp[2] = max(nums[2]+dp[0],nums[1]);
        for(int i=3;i<101;i++) {
            dp[i] = -1;
        }
        return rec(dp,nums,nums.size()-1);
    }
};

/*
SAMPLE INPUT : 
[1,2,3,1]
[2,7,9,3,1]
SAMPLE OUTPUT :
4
12
*/
