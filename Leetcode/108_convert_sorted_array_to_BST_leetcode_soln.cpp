/*
Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.
A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        int mid=n/2;
        TreeNode * root = new TreeNode(nums[mid]);
        if(n==1) return root;
        vector<int> l;
        vector<int> r;
        for(int i=0;i<mid;i++) l.push_back(nums[i]);
        for(int i=mid+1;i<n;i++) r.push_back(nums[i]);
        if(!empty(l)) root->left = sortedArrayToBST(l);
        if(!empty(r)) root->right = sortedArrayToBST(r);
        return root;
    }
};

/*
SAMPLE INPUT :
[-10,-3,0,5,9]
[1,3] 
SAMPLE OUTPUT : 
[0,-3,9,-10,null,5]
[3,1]
*/
