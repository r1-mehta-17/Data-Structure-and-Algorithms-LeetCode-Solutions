// Given the root of a binary tree, invert the tree, and return its root.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *lef;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode * root) {
        if (!root) return;
        solve(root->left);
        solve(root->right);
        swap(root->left,root->right);
        
    }
    TreeNode * invertTree(TreeNode* root) {
        solve(root);
        return root;
    }
};

/*
SAMPLE INPUT : 
[4,2,7,1,3,6,9]
[2,1,3]
[]
SAMPLE OUTPUT : 
[4,7,2,9,6,3,1]
[2,3,1]
[]
*/
