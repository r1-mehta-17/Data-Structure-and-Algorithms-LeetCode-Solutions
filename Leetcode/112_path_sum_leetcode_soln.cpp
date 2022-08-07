/*
Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.
A leaf is a node with no children.
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
    bool ans=false;
    int sum=0;
    void recur(TreeNode* root, int target){
        if(root==NULL)return;
        sum+=root->val;
        recur(root->left,target);
        recur(root->right,target);
        if(root->left==NULL && root->right==NULL&&sum == target){ 
            ans = true;
            return;
        }
        sum-=root->val; //backtracking
        return;
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        recur(root,targetSum);
        return ans;
    }
};

/*
SAMPLE INPUT : 
[5,4,8,11,null,13,4,7,2,null,null,null,1]
22
[1,2,3]
5
[]
0
SAMPLE OUTPUT :
true
false
false
*/
