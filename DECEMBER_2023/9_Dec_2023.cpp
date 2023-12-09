//94. Binary Tree Inorder Traversal

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
    void inorder(TreeNode* root,vector<int> &ans)
    {
        if(root!=NULL)
        {
            inorder(root->left,ans);
            ans.push_back(root->val);
            inorder(root->right,ans);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        return ans;
    }
};

int main()
{
    // Create a sample binary tree
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    // Create an instance of the Solution class
    Solution s;

    // Call the inorderTraversal method and get the result
    vector<int> result = s.inorderTraversal(root);

    // Print the result
    cout << "Inorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    
    // Clean up memory (delete in the correct order)
    delete root->right->left;
    delete root->right;
    delete root;

    return 0;
}
