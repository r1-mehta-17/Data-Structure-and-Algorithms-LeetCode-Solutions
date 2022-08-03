/*
Given the root of a binary tree, return the inorder traversal of its nodes' values.
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
    void inorder(TreeNode * root, vector<int> & io) {
        if(root!=NULL) {
            inorder(root->left,io);
            io.push_back(root->val);
            inorder(root->right,io);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> io;
        inorder(root,io);
        return io;
    }
};

/*
SAMPLE INPUT : 
[1,null,2,3]
[]
[1]
SAMPLE OUTPUT :
[1,3,2]
[]
[1]
*/
