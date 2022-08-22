/*
Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:
 - [4,5,6,7,0,1,2] if it was rotated 4 times.
 - [0,1,2,4,5,6,7] if it was rotated 7 times.
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].
Given the sorted rotated array nums of unique elements, return the minimum element of this array.
You must write an algorithm that runs in O(log n) time.
*/

// HERE AGAIN LINEAR SEARCH IS A SIMPLE APPROACH TO FIND THE MINIMUM ELEMENT AND ALL TEST CASES WILL PASS THROUGH IT BUT FOR BETTER TIME COMPLEXITY WE NEED TO USE BINARY SEARCH
class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini=1e9+7;
        for(int i=0;i<nums.size();i++) {
            mini = min(mini,nums[i]);
        }
        return mini;
    }
};

// THE CODE FOR THE PROBLEM USING BINARY SEARCH IS GIVEN BELOW
class Solution {
public:
    int findpivot(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        int mid;
        while(l<=r){
            mid=(l+r)/2;
            if(nums[mid]>nums[mid+1]) return mid;
            else if(nums[mid]>=nums[l]) l=mid+1;
            else r=mid-1;
        }
        return mid;
    }
    int findMin(vector<int>& nums) {
        if(nums[0]<=nums[nums.size()-1]) return nums[0];
        return nums[findpivot(nums)+1];
    }
};

/*
SAMPLE INPUT :
[3,4,5,1,2]
[4,5,6,7,0,1,2]
[11,13,15,17]
SAMLPE OUTPUT :
1
0
11
*/
