/*
There is an integer array nums sorted in ascending order (with distinct values).
Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.
You must write an algorithm with O(log n) runtime complexity.
*/

// THERE IS A VERY SIMPLE APPROACH TO THIS PROBLEM WHICH IS GIVEN BELOW.
class Solution {
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++) {
            if(nums[i]==target) return i;
        }
        return -1;
    }
}

// BUT THERE IS A FASTER APPROACH USING BINARY SEARCH WHICH IS GIVEN BELOW ALTHOUGH ALL THE TEST CASES WOULD BE PASSED BY THE CODE ABOVE.
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        int mid;
        while(l<=r){
            mid = (l+r)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>=nums[l]) {
                if(target<=nums[mid]&&target>=nums[l]) r=mid-1;
                else l=mid+1;
            } else {
                if(target>=nums[mid]&&target<=nums[r]) l=mid+1;
                else r=mid-1;
            }
        }
        return -1;
    }
};

/*
SAMPLE INPUT :
[4,5,6,7,0,1,2]
0
[4,5,6,7,0,1,2]
3
[1]
0
SAMPLE OUTPUT :
4
-1
-1
*/
