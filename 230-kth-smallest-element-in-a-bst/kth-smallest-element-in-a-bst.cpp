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
    void inorder(TreeNode* root,int &k,int &res)
    {
        if(!root) return;
        inorder(root->left,k,res);
            if(--k == 0)
            {
                res = root->val;
                return;
            }
        inorder(root->right,k,res);
    }
    int kthSmallest(TreeNode* root, int k) {
        //the inorder traversal of a binary tree is always the elements in ascending order
        int res = -1;
        if(!root) return res;
        inorder(root,k,res);
        return res;
    }
};