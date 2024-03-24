
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        queue<TreeNode*> q;
        vector<vector<int>> levelorder;

        if(!root) return levelorder;
        q.push(root);

        while (!q.empty()) {
            int n = q.size();
            vector<int> level;

            for (int i = 0; i < n; i++) {
                root = q.front();
                q.pop();

                if (root->left)
                    q.push(root->left);
                if (root->right)
                    q.push(root->right);

                level.push_back(root->val);
            }

            levelorder.push_back(level);
        }

        reverse(levelorder.begin(), levelorder.end());
        return levelorder;
    }
};