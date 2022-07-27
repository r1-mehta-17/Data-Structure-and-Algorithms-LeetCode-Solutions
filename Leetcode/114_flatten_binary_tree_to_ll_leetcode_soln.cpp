/*
Given the root of a binary tree, flatten the tree into a "linked list":
 - The "linked list" should use the same TreeNode class where the right child pointer points to the next node in the list and the left child pointer is always null.
 - The "linked list" should be in the same order as a pre-order traversal of the binary tree.
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
    void flatten(TreeNode* root) {
        if(root == NULL)
            return;
       
        flatten(root->left);
        flatten(root->right);
        if(root->left){
            TreeNode *right = root->right;
            root->right = root->left;
            root->left = NULL;
            while(root->right) root = root->right;
            root->right = right;
        }
    }
};
/*
SAMPLE INPUT : 
[1,2,5,3,4,null,6]
[]
[0]
SAMPLE OUTPUT : 
[1,null,2,null,3,null,4,null,5,null,6]
[]
[0]
*/
