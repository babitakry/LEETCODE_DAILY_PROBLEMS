//606. Construct String from Binary Tree
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
    void recPreOrder(TreeNode* root,string &s){
      if(root){
        s = s + to_string(root->val);
        if(root->left != NULL || root->right != NULL){
           s = s + '(';
           recPreOrder(root->left,s);
           s = s + ')';
        }
        if(root->right != NULL){
          s = s + '(';
          recPreOrder(root->right,s);
          s = s + ')';
        }
        
      }
    }
    string tree2str(TreeNode* root) {
       string s;
       recPreOrder(root,s);
       return s; 
    }
};
int main() {
    // Create a sample binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(4);

    // Create an instance of the Solution class
    Solution s;

    // Call the tree2str method and print the result
    string result = s.tree2str(root);
    cout << "Result: " << result << endl;

    // Clean up memory (don't forget to delete allocated nodes)
    delete root->left->left;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
