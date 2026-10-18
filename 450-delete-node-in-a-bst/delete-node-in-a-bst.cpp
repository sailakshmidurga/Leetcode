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
    TreeNode* helper(TreeNode* root)
    {
        //if no left child
        if(root->left == nullptr)
        {
            return root->right;
        }
        else if(root->right == nullptr)
        {
            return root->left;
        }
        TreeNode* rightTree = root->right;
        TreeNode* lastRight = findLastRight(root->left);
        lastRight->right = rightTree;
        return root->left;
    }
    TreeNode* findLastRight(TreeNode* root)
    {
        if(!root->right) return root;
        return findLastRight(root->right);
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
       if(!root) return nullptr;
       TreeNode* dummy = root;
       if(root->val == key)
       {
            return helper(root);
       }
       while(root)
       {
          if(root->val <= key)
          {
                if(root->right && root->right->val == key)
                {
                    root->right = helper(root->right);
                    break;
                }
                else
                {
                    root = root->right;
                }
          }
          else
          {
            if(root->left && root->left->val == key)
            {
                root->left = helper(root->left);
                break;
            }
            else
            {
                root = root->left;
            }
          }
       }
       return dummy;
    }
};