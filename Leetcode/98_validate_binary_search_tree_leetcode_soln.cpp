/*
Given the root of a binary tree, determine if it is a valid binary search tree (BST).
A valid BST is defined as follows:
 - The left subtree of a node contains only nodes with keys less than the node's key.
 - The right subtree of a node contains only nodes with keys greater than the node's key.
 - Both the left and right subtrees must also be binary search trees.
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
    void inorder(TreeNode* head){
        if(head != NULL){
            inorder(head->left);
            ans.push_back(head->val);
            inorder(head->right);
        }
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return ans;
    }
    bool isValidBST(TreeNode* root) {
        inorderTraversal(root);
        for(int i=0;i<ans.size()-1;i++) {
            if(ans[i] >= ans[i+1]) {
                return false;
            }
        }
        return true;
    }
};

/*
SAMPLE INPUT : 
[2,1,3]
[5,1,4,null,null,3,6]
SAMPLE OUTPUT : 
true
false
*/
