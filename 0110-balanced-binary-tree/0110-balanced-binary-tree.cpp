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
    bool res = true;

    int dfs(TreeNode* root) {
        if(!res || !root)
            return 0;

        int lh = 0, rh = 0;

        if(root->left)
            lh = dfs(root->left) + 1;
        
        if(root->right)
            rh = dfs(root->right) + 1;
        
        if(abs(lh - rh) > 1)
            res = false;
        
        return max(lh, rh);
    }
    bool isBalanced(TreeNode* root) {
        dfs(root);
        return res;
    }
};