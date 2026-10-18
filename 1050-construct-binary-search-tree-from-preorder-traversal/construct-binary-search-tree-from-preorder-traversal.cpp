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
    TreeNode* build(vector<int>&A,int &i, int ub)
    {
        if(i == A.size() || A[i] > ub) return nullptr;
        TreeNode* node = new TreeNode(A[i++]);
        node->left = build(A,i,node->val);
        node->right = build(A,i,ub);
        return node;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        int ub = INT_MAX;
        return build(preorder,i,ub);
    }
};