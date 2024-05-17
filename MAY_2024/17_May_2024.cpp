//1325. Delete Leaves With a Given Value

#include<bits/stdc++.h>
using namespace std;


//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* recursive(TreeNode* root, int target) {
        if (root == NULL) 
          return NULL;
        root->left = recursive(root->left, target);
        root->right = recursive(root->right, target);
        if (root->left == NULL && root->right == NULL && root->val == target) 
           return NULL;
        return root;
    }

    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        return recursive(root, target);
    }
};