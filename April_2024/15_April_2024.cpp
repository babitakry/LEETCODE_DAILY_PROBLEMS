//129. Sum Root to Leaf Numbers

#include<bits/stdc++.h>
using namespace std;

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
    void preorder(TreeNode* root,int sum,int &temp){
        if(root == NULL){
            return;
        }
        sum = 10*sum + root->val;
        if(root->left == NULL && root->right == NULL){
            temp += sum;
            return;
        }
        preorder(root->left,sum,temp);
        preorder(root->right,sum,temp);
     
    }
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        int temp = 0;
        preorder(root,sum,temp);

        return temp;
    }
};

