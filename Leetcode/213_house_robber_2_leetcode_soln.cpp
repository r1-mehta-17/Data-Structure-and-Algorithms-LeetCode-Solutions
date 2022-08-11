/*
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. All houses at this place are arranged in a circle. That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system connected, and it will automatically contact the police if two adjacent houses were broken into on the same night.
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
    int rob1(vector<int>& nums) {
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
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[0],nums[1]);
        vector<int> imp1;
        vector<int> imp2;
        for(int i=0;i<nums.size()-1;i++) {
            imp1.push_back(nums[i]);
        }
        for(int i=1;i<nums.size();i++) {
            imp2.push_back(nums[i]);
        }
        return max(rob1(imp1),rob1(imp2));
    }
};

/*
SAMPLE INPUT :
[2,3,2]
[1,2,3,1]
[1,2,3]
SAMPLE OUTPUT :
3
4
3
*/
