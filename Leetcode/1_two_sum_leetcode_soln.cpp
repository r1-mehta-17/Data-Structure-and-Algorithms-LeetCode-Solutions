/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int r = nums.size()-1,l = 0;
        vector<int> x = nums;
        int lint, rint;
        sort(x.begin(),x.end());
        int sum = 0;
        while(l<r){
            sum = x[l] + x[r];
            if (sum > target) {
                r--;
            } else if (sum < target){
                l++;
            } else {
                break;
            }
        }
        lint = x[l];
        rint = x[r];
        for(int i=0;i<nums.size();i++){
            if(nums[i] == lint) {
                l = i;
                break;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] == rint && l != i) {
                r = i;
                break;
            }
        }
        vector<int> ans;
        ans.push_back(l);
        ans.push_back(r);
        return ans;
    }
};

//alternative solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int,int> hash;
        vector <int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (hash.find(target-nums[i]) != hash.end()) {
                ans.push_back(hash[target-nums[i]]);
                ans.push_back(i);
                return ans;
            } else {
                hash[nums[i]] = i;
            }
        }
        return ans;
    }
};

/*
SAMPLE INPUT :
[3,3]
SAMPLE OUTPUT :
6
*/
