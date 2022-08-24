/*
Given an array of non-negative integers nums, you are initially positioned at the first index of the array.
Each element in the array represents your maximum jump length at that position.
Your goal is to reach the last index in the minimum number of jumps.
You can assume that you can always reach the last index.
*/

class Solution {
public:
    vector<int> store;

    int minJumps(vector<int> &nums, int start){
        if(start >= nums.size() - 1)
            return 0;
        if(store[start])
            return store[start];
        int minJump = 1e9+7;
        for(int i = start + 1; i <= start + nums[start]; i++)
            minJump = min(minJump, 1 + minJumps(nums, i));
        store[start] = minJump;
        return store[start];
    }

    int jump(vector<int>& nums) {
        store = vector<int>(nums.size());
        return minJumps(nums, 0);
    }
};

/*
SAMPLE INPUT :
[2,3,1,1,4]
[2,3,0,1,4]
SAMPLE OUTPUT :
2
2
*/
