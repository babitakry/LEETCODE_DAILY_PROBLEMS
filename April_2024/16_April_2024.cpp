//623. Add One Row to Tree

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
    void levelOrderTraversal(TreeNode* root, int val, int depth){
    
        TreeNode* temp = root;
        queue<TreeNode*> Q;
        int cnt = 1;

        Q.push(root);
        while(!Q.empty()){
            vector<int> level;
            int size = Q.size();
            while(size){
                temp = Q.front();
                level.push_back(temp->val);
                Q.pop();
                if(cnt == depth-1){
                    TreeNode* ptr1 = temp->left;
                    temp->left = new TreeNode(val);
                    temp->left->left = ptr1;

                    TreeNode* ptr2 = temp->right;
                    temp->right = new TreeNode(val);
                    
                    temp->right->right = ptr2;
                }
                else{
                    if(temp->left)
                      Q.push(temp->left);
                    if(temp->right)
                      Q.push(temp->right);
                }
                size--;
            }
            cnt++;
        }
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth==1){
            TreeNode* ptr=new TreeNode(val);
            ptr->left=root;
            return ptr;
        }
        levelOrderTraversal(root, val, depth);
        return root;
    }
};

// class Solution {
// public:
//     void dfs(TreeNode* root, int val, int depth, int level){
//         if (!root) return;
//         if (level<depth-1){
//             dfs(root->left, val, depth, level+1);
//             dfs(root->right, val, depth, level+1);
//         }
//         else{
//             TreeNode* ptr=root->left;
//             root->left=new TreeNode(val);
//             root->left->left=ptr;

//             ptr=root->right;
//             root->right=new TreeNode(val);
//             root->right->right=ptr;
//         }

//     }
//     TreeNode* addOneRow(TreeNode* root, int val, int depth) {
//         if (depth==1){
//             TreeNode* ptr=new TreeNode(val);
//             ptr->left=root;
//             return ptr;
//         }
//         dfs(root, val, depth, 1);
//         return root;
//     }
// };