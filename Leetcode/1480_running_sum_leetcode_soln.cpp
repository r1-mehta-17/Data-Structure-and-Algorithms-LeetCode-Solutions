/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums.
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
        int cur = 0;
        for(int i=0;i<nums.size();i++) {
            cur += nums[i];
            sum.push_back(cur);
        }
        return sum;
    }
};

/*
SAMPLE INPUT :
[1,2,3,4]
SAMPLE OUTPUT :
[1,3,6,10]
*/
