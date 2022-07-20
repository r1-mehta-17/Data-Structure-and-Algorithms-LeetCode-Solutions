// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum. A subarray is a contiguous part of an array.

// SOLUTION USING KADANE'S ALGORITHM :

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum = 0;
        int best_so_far = INT_MIN;
        int i = 0;
        for(int i=0;i<nums.size();i++){
            curr_sum += nums[i];
            if(best_so_far < curr_sum){
                best_so_far = curr_sum;
            } 
            if(curr_sum<0){
                curr_sum = 0;
            }
        }
        return best_so_far;
    }
};

/*
SAMPLE INPUT : 
[-2,1,-3,4,-1,2,1,-5,4]
SAMPLE OUTPUT : 
6
*/
