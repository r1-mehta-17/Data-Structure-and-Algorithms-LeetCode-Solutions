/*
You are given the root node of a binary search tree (BST) and a value to insert into the tree. Return the root node of the BST after the insertion. It is guaranteed that the new value does not exist in the original BST.
Notice that there may exist multiple valid ways for the insertion, as long as the tree remains a BST after insertion. You can return any of them.
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL) return new TreeNode(val);
        TreeNode* node = root;
        while(true){
            if(val>=node->val){
                if(node->right) node = node->right;
                else{
                    node->right = new TreeNode(val);
                    break;
                }
            }
            else{
                if(node->left) node = node->left;
                else{
                    node->left = new TreeNode(val);
                    break;
                }
            }
        }
        return root;
    }
};

/*
SAMPLE INPUT : 
[4,2,7,1,3]
5
SAMPLE OUTPUT : 
[4,2,7,1,3,5]
