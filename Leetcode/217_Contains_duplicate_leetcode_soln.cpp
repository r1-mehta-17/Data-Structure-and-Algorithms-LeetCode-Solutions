/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(begin(nums), end(nums));
        for (int i = 1; i < nums.size(); ++ i) {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }
        return false;
    }
};
/*
SAMPLE INPUT :
[1,2,3,1]
[1,2,3,4]
[1,1,1,3,3,4,3,2,4,2]
SAMPLE OUTPUT :
true
false
true
*/
