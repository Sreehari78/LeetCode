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
 int speed = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

class Solution {
public:
    int minDepth(TreeNode* root) {
        

        int depth = 1;
        queue<TreeNode*> q;

        if (!root)
            return 0;
        q.push(root);

        while (!q.empty()) {
            int n = q.size();

            for (int i = 0; i < n; i++) {
                root = q.front();
                q.pop();

                if (!root->left && !root->right)
                    return depth;
                if (root->left)
                    q.push(root->left);
                if (root->right)
                    q.push(root->right);
            }

            depth++;
        }

        return depth;
    }
};