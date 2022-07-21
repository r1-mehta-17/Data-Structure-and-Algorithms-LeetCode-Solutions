/*
Given a circular integer array nums of length n, return the maximum possible sum of a non-empty subarray of nums.
A circular array means the end of the array connects to the beginning of the array. Formally, the next element of nums[i] is nums[(i + 1) % n] and the previous element of nums[i] is nums[(i - 1 + n) % n].
A subarray may only include each element of the fixed buffer nums at most once. Formally, for a subarray nums[i], nums[i + 1], ..., nums[j], there does not exist i <= k1, k2 <= j with k1 % n == k2 % n.

SAMPLE INPUT AND OUTPUT : 

Input: nums = [1,-2,3,-2]
Output: 3

Input: nums = [5,-3,5]
Output: 10

Input: nums = [-3,-2,-3]
Output: -2
*/

class Solution {
public:
    int kadanes(vector<int>nums){
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
    int maxSubarraySumCircular(vector<int>& nums) {
        int max1 = kadanes(nums);
        vector<int> nums2;
        int sum = 0;
        int ans = max1;
        for(int i=0;i<nums.size();i++){
            nums2.push_back(nums[i]*(-1));
            sum += nums[i];
        } 
        int max2 = kadanes(nums2);
        if(max1 <= 0 && (sum + max2) <= 0){
            return max1;
        }
        ans = max(max1,sum+max2);
        return ans;
    }
};

/*
SAMPLE INPUT :
[-92,78,-45,-63,1,34,81,50,14,91,-77,-54,13,-88,24,37,-12,59,-48,-62,57,-22,-8,85,48,71,12,1,-20,36,-32,-14,39,46,-41,75,13,-23,98,10,-88,64,50,37,-95,-32,46,-91,10,79,-11,43,-94,98,79,42,51,71,4,-30,2,74,4,10,61,98,57,98,46,43,-16,72,53,-69,54,-96,22,0,-7,92,-69,80,68,-73,-24,-92,-21,82,32,-1,-6,16,15,-29,70,-66,-85,80,50,-3]
SAMPLE OUTPUT : 
1437
*/
