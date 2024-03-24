/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
private:
    int diameter = 0;

    int maxHeight(TreeNode* root) {
        if (!root)
            return 0;

        int lh = maxHeight(root->left);
        int rh = maxHeight(root->right);

        diameter = max(lh + rh, diameter);
        return 1 + max(lh, rh);
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        maxHeight(root);
        return diameter;
    }
};