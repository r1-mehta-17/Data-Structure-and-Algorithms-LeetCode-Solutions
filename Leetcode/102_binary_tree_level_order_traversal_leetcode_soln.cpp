/*
Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root==NULL) return {};
        vector<vector<int>> result;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()){
            int count = q.size();
            vector<int> level;
            for(int i=0;i<count;i++){
                TreeNode * node = q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                level.push_back(node->val);
            }
            result.push_back(level);
        }
        return result;
    }
};
/*
SAMPLE INPUT : 
[3,9,20,null,null,15,7]
[1]
[]
SAMPLE OUTPUT : 
[[3],[9,20],[15,7]]
[[1]]
[]
*/
