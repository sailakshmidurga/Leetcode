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
 vector<int> modes;
    int currentVal;
    int currentCount = 0;
    int maxCount = 0;

    void handleValue(int val, bool collect) {
        if (val != currentVal) {
            currentVal = val;
            currentCount = 0;
        }
        currentCount++;
        if (currentCount > maxCount) {
            maxCount = currentCount;
            if (collect) {
                modes.clear();
                modes.push_back(val);
            }
        } else if (currentCount == maxCount && collect) {
            modes.push_back(val);
        }
    }

    void inorder(TreeNode* root, bool collect) {
        if (!root) return;
        inorder(root->left, collect);
        handleValue(root->val, collect);
        inorder(root->right, collect);
    }
    vector<int> findMode(TreeNode* root) {
        inorder(root, false);
        currentCount = 0;
        currentVal = INT_MIN;
        inorder(root, true);
        return modes;
 
    }
};