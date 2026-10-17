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

 //reverse preorder i am doing here -> root->right->left
class Solution {
public:
    void right(TreeNode* node,int col,vector<int>&res)
    {
        if(!node) return;
        if(res.size() == col)
        {
            res.push_back(node->val);
        }
        if(node->right) right(node->right,col + 1,res);
        if(node->left) right(node->left,col + 1,res);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        right(root,0,res);
        return res;
    }
};