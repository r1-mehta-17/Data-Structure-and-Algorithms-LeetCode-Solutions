/*
Given a binary search tree (BST), find the lowest common ancestor (LCA) node of two given nodes in the BST.
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->val == p->val || root->val == q->val) {
            return root;
        } 
        if(root->val > p->val && root->val < q->val) {
            return root;
        }
        if(root->val > q->val && root->val < p->val) {
            return root;
        }
        if(root->val > p->val && root->val > q->val) {
            return lowestCommonAncestor(root->left,p,q);
        } else {
            return lowestCommonAncestor(root->right,p,q);
        }
    }
};

/*
SAMPLE INPUT : 
[6,2,8,0,4,7,9,null,null,3,5]
2
8
[6,2,8,0,4,7,9,null,null,3,5]
2
4
[2,1]
2
1
SAMPLE OUTPUT : 
6
2
*/
