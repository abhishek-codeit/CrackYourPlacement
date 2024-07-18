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

 void invert(TreeNode* root){
    if(!root) return;

    invert(root->left);
    invert(root->right);

    TreeNode* data = root->left;
    root->left = root->right;
    root->right = data;

 }
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }
};