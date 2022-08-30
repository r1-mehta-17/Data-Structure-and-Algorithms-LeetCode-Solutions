/*
Given an integer array nums and an integer k, return the kth largest element in the array.
Note that it is the kth largest element in the sorted order, not the kth distinct element.
You must solve it in O(n) time complexity.
*/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;
        for(int i=0;i<nums.size();i++) {
            q.push(nums[i]);
        }
        int ans;
        while(k--) {
            ans = q.top();
            q.pop();
        }
        return ans;
    }
};

/*
SAMPLE INPUT :
[3,2,1,5,6,4]
2
[3,2,3,1,2,4,5,5,6]
4
SAMPLE OUTPUT :
5
4
*/
