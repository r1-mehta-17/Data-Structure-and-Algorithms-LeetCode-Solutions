/*
Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.
Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.
The tests are generated such that there is exactly one solution. You may not use the same element twice.
Your solution must use only constant extra space.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0;
        int r=numbers.size()-1;
        vector<int> result;
        while(l!=r) {
            if(numbers[l]+numbers[r]==target) {
                result.push_back(l+1);
                result.push_back(r+1);
                break;
            } else if(numbers[l]+numbers[r]>target) {
                r--;
            } else {
                l++;
            }
        }
        return result;
    }
};

/*
SAMPLE INPUT :
[2,7,11,15]
9
[2,3,4]
6
[-1,0]
-1
SAMPLE OUTPUT :
[1,2]
[1,3]
[1,2]
*/
