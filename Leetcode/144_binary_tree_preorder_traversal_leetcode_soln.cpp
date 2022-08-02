/*
Given the root of a binary tree, return the preorder traversal of its nodes' values.
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
    vector<int>ans;
    void preorder(TreeNode* head){
        if(head != NULL){
            ans.push_back(head->val);
            preorder(head->left);
            preorder(head->right);
        }
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return ans;
    }
};

/*
SAMPLE INPUT : 
[1,null,2,3]
[]
[1]
SAMPLE OUTPUT : 
[1,2,3]
[]
[1]
