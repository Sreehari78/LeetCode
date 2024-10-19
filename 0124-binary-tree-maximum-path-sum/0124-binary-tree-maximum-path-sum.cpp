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
    int res = INT_MIN;
    int dfs(TreeNode* root) {
        if(!root)
            return 0;
        
        int ls = max(0, dfs(root->left));
        int rs = max(0, dfs(root->right));

        res = max(res, ls + rs + root->val);
        return max(ls, rs) + root->val;
    }

    int maxPathSum(TreeNode* root) {
        dfs(root);
        return res;
    }
};