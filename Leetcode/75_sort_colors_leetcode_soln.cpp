/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size();i++) {
            int min_index = 0;
            int mini = 3;
            for(int j=i;j<nums.size();j++) {
                if(mini > nums[j]) {
                    mini = nums[j];
                    min_index = j;
                }
            } 
            int temp = nums[i];
            nums[i] = mini;
            nums[min_index] = temp;
        }
    }
};

/*
SAMPLE INPUT :
[2,0,2,1,1,0]
[2,0,1]
SAMPLE OUTPUT :
[0,0,1,1,2,2]
[0,1,2]
*/
