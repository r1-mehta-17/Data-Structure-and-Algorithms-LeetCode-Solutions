/*
Given an array of integers nums, calculate the pivot index of this array.
The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.
Return the leftmost pivot index. If no such index exists, return -1.
*/
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> sum;
        int cur = 0;
        for(int i=0;i<nums.size();i++) {
            cur += nums[i];
            sum.push_back(cur);
        }
        for(int i=0;i<nums.size();i++) {
            if(i==0 && 0 == (sum[nums.size()-1] - sum[i])) {
                return 0;
            }
            else if(i > 0 && sum[i-1] == (sum[sum.size()-1] - sum[i])) {
                return i;
            }
        }
        return -1;
    }
};
/*
SAMPLE INPUT :
[1,7,3,6,5,6]
SAMPLE OUTPUT :
3
*/
