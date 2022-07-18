class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int change = 0; // Take a variable which keeps track of the current nature of the array and returns false upon change in nature.
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                if (change == -1) {
                    return false;
                } else if (change = 1) {
                    continue;
                } else if (change == 0){
                    change = 1;
                }
            } else if (nums[i] < nums[i + 1]) {
                if (change == -1) {
                    continue;
                } else if (change == 1) {
                    return false;
                } else if (change == 0) {
                    change = -1;
                }
            } 
        }
        return true;
    }
}; 

/*
SAMPLE INPUT :
[2,3,4,4]
SAMPLE OUTPUT :
true
*/
