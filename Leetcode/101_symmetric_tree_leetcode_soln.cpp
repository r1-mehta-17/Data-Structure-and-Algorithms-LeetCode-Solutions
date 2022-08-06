/*
Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).
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
    bool solve(TreeNode * root1, TreeNode * root2) {
        if(root1 == NULL && root2 == NULL) return true;
        else if(root1==NULL || root2 == NULL) return false;
        if(root1->val != root2->val) return false;
        if(solve(root1->left,root2->right) && solve(root1->right,root2->left)) return true;
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        return solve(root->left,root->right);
    }
};

/*
SAMPLE INPUT : 
[1,2,2,3,4,4,3]
[1,2,2,null,3,null,3]
SAMPLE OUTPUT : 
true
false
*/
