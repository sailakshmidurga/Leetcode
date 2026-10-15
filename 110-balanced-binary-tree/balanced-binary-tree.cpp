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
class Solution {
public:
    int height(TreeNode* root)
    {
        if(!root) return 0;
        int ld = height(root->left);
        int rd = height(root->right);
        return 1 + max(ld,rd);
    }
    bool isBalanced(TreeNode* root) {
       if(!root) return true;
       int ld = height(root->left);
       int rd = height(root->right);

       if(abs(ld - rd) > 1) return false;
       return isBalanced(root->left) && isBalanced(root->right);
    }
};