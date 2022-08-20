/*
You are given an array nums of non-negative integers. nums is considered special if there exists a number x such that there are exactly x numbers in nums that are greater than or equal to x.
Notice that x does not have to be an element in nums.
Return x if the array is special, otherwise, return -1. It can be proven that if nums is special, the value for x is unique.
*/

class Solution {
public:
    int specialArray(vector<int>& nums) {
        vector<int> arr(1001,0);
        for(int i:nums) {
            arr[i]++;
        }
        int maxi = nums.size();
        for(int i=0;i<1001;i++) {
            if(maxi == i) return i;
            else {
                maxi-=arr[i];
            }
        }
        return -1;
    }
};

/*
SAMPLE INPUT :
[3,5]
[0,0]
[0,4,3,0,4]
SAMPLE OUTPUT :
2
-1
3
*/
