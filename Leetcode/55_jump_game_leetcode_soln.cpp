/*
You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.
Return true if you can reach the last index, or false otherwise.
*/

class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums[0] == 0 && nums.size()!=1) return false; 
        else if (nums.size()==1) return true;
        int maxi = 0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] == 0) continue;
            if(i>maxi) return false;
            if(i+nums[i] > maxi) {
                maxi = i + nums[i];
            }
            
            if(maxi >= nums.size()-1) return true;
        }
        return false;
    }
};

/*
SAMPLE INPUT :
[2,3,1,1,4]
[3,2,1,0,4]
SAMPLE OUTPUT :
true
false
*/
