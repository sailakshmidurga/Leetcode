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
    bool isValidBST(TreeNode* node,long min_val,long max_val)
    {
        if(!node) return true;
        if(node->val >= max_val || node->val <= min_val) return false;
        return isValidBST(node->left,min_val,node->val)
                && isValidBST(node->right,node->val,max_val);
    }
public:
    bool isValidBST(TreeNode* root) {
        return isValidBST(root,LONG_MIN,LONG_MAX);
    }
};