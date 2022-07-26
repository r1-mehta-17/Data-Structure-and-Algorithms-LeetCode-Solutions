/*
Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.
According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* solve(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if(!root)return nullptr;
        if(root == p or root == q)return root;
        TreeNode* leftcall = solve(root->left,p,q);
        TreeNode* rightcall = solve(root->right,p,q);
        if(leftcall and rightcall)return root;
        if(!leftcall)return rightcall;
        if(!rightcall)return leftcall;
        return nullptr;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return solve(root,p,q);
    }
};

/*
SAMPLE INPUT : 
[3,5,1,6,2,0,8,null,null,7,4]
5
4
SAMPLE OUTPUT : 
5
*/
