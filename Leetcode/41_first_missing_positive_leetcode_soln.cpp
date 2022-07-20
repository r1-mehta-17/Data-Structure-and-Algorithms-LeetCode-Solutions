/*
Given an unsorted integer array nums, return the smallest missing positive integer. You must implement an algorithm that runs in O(n) time and uses constant extra space.
*/

/*
THIS SOLUTION IS CORRECT FOR THE LEETCODE PROBLEM BUT ITS TIME COMPLEXITY IS O(N*LOG(N)). THE QUESTION ASKS US TO PERFORM THIS USING O(N) TIME COMPLEXITY.
*/
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>::iterator ip;
        ip = unique(nums.begin(),nums.end());
        nums.resize(distance(nums.begin(),ip));
        int i=0;
        if(nums[nums.size()-1] <= 0){
            return 1;
        }
        while(nums[i]<=0){
            i++;
        }
        if(nums[i]!=1){
            return 1;
        }
        while(i<nums.size()){
            if(i == nums.size()-1){
                return nums[i]+1;
            }
            if(nums[i+1]-nums[i] != 1){
                break;
            }
            i++;
        }
        return nums[i]+1;
    }
};

/*
THE CODE BELOW IS PERFECT AS PER THE CONDITIONS MENTIONED IN THE QUESTION. THE TIME COMPLEXITY IS O(N)
*/
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int arr[1000000] = {0};
        int i=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>1000000){
                continue;
            }
            else if(nums[i]>=0){
                arr[nums[i]]++;
            } else {
                continue;
            }
        }
        
        for(i=1; i<1000000;i++){
            if(arr[i] == 0){
                break;
            }
        }
        return i;
    }
};

/*
SAMPLE INPUT1 :
[1,2,0]
SAMPLE OUTPUT1:
3
SAMPLE INPUT2 :
[3,4,-1,1]
SAMPLE OUTPUT2 :
2
SAMPLE INPUT3 :
[7,8,9,11,12]
SAMPLE OUTPUT3 :
1
*/
