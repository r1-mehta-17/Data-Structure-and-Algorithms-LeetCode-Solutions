/*
ALL THE 3 TYPES OF TRAVERSALS : INORDER, POSTORDER AND PREORDER ARE INCLUDED IN THIS CODE. A SAMPLE TREE IS USED FOR SHOWING THE TRAVERSAL TECHNIQUES
*/

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

struct tree {
    int val;
    struct tree * left;
    struct tree * right;
    tree(int value){
        val = value;
        left = NULL;
        right = NULL;
    }
};
void preorder(struct tree * root) {
    if(root == NULL) {
        return;
    }
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct tree * root) {
    if(root==NULL) {
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
void postorder(struct tree * root) {
    if(root==NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}
int main() {
    /*
            1
           / \
          2   3
         / \ / \
        4  5 6  7
    */
    struct tree * root = new tree(1);
    root->left = new tree(2);
    root->right = new tree(3);
    root->left->left = new tree(4);
    root->left->right = new tree(5);
    root->right->left = new tree(6);
    root->right->right = new tree(7);
    cout << "Preorder Traversal : " ;
    preorder(root);
    cout << "\nInorder Traversal : ";
    inorder(root);
    cout << "\nPostorder Traversal : ";
    postorder(root);
    return 0;
}

/*
SAMPLE OUTPUT :
Preorder Traversal : 1 2 4 5 3 6 7 
Inorder Traversal : 4 2 5 1 6 3 7 
Postorder Traversal : 4 5 2 6 7 3 1 
*/
