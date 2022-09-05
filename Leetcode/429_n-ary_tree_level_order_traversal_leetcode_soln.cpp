/*
Given an n-ary tree, return the level order traversal of its nodes' values.
Nary-Tree input serialization is represented in their level order traversal, each group of children is separated by the null value (See examples).
*/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
         vector<vector<int>> ans;
        if(root==NULL) return ans;
       
        queue<Node*> main_queue;
        main_queue.push(root);
        vector<int> temp;
        while (!main_queue.empty()) {
            int n = main_queue.size();
            for (int i = 0; i < n; i++) {
                Node* cur = main_queue.front();
                main_queue.pop();
                temp.push_back(cur->val);
                for (auto u : cur->children)
                    main_queue.push(u);
            }
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};

/*
SAMPLE INPUT :
[1,null,3,2,4,null,5,6]
[1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]
SAMPLE OUTPUT :
[[1],[3,2,4],[5,6]]
[[1],[2,3,4,5],[6,7,8,9,10],[11,12,13],[14]]
*/
