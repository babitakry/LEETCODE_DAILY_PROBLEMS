//872. Leaf-Similar Trees

#include<bits/stdc++.h>
using namespace std;


// Definition for a binary tree node.
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
    void recuInorder(TreeNode* root,vector<int> &ans){
        if(root != NULL){
            recuInorder(root->left,ans);
            if(root->left == NULL && root->right == NULL){
                ans.push_back(root->val);
            }
            recuInorder(root->right,ans);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> ans1;
        vector<int> ans2;
        recuInorder(root1,ans1);
        recuInorder(root2,ans2);
        
        int i = 0;
        int j = 0;
        while(i < ans1.size() || j < ans2.size()){
            if(ans1[i] == ans2[j]){
                i++;
                j++;
            }
            else {
                return false;
            }
        }
       return true;
    }
};
