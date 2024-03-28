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
public:
    int minDepth(TreeNode* root) {
        vector<vector<int>> levelorder;
        queue<TreeNode*> q;

        if (!root)
            return 0;
        q.push(root);

        while (!q.empty()) {
            vector<int> level;
            int n = q.size();

            for (int i = 0; i < n; i++) {
                root = q.front();
                q.pop();
                level.push_back(root->val);

                if (!root->left && !root->right)
                    return levelorder.size() + 1;
                if (root->left)
                    q.push(root->left);
                if (root->right)
                    q.push(root->right);
            }

            levelorder.push_back(level);
        }

        return levelorder.size();
    }
};