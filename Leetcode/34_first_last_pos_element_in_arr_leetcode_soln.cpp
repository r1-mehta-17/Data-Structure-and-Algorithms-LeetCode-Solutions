/*
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.
*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        while(l<=r) {
            if(nums[l]==target && nums[r]==target) {
                break;
            } 
            if(nums[l] < target) {
                l++;
            }
            if(nums[r] > target) {
                r--;
            }
        }
        if(l>r) {
            l=-1;
            r=-1;
        }
        vector<int> ans;
        ans.push_back(l);
        ans.push_back(r);
        return ans;
    }
};

/*
SAMPLE INPUT : 
[5,7,7,8,8,10]
8
[5,7,7,8,8,10]
6
[]
0
SAMPLE OUTPUT :
[3,4]
[-1,-1]
[-1,-1]
*/
