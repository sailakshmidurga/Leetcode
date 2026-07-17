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
    int maxDepth(TreeNode* node,int& maxi)
    {
        if(!node) return 0;
        int leftSum = max(0,maxDepth(node->left,maxi));
        int rightSum = max(0,maxDepth(node->right,maxi));
        maxi = max(maxi,node->val+leftSum+rightSum);
        return node->val+max(leftSum,rightSum);
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxDepth(root,maxi);
        return maxi;
    }
};