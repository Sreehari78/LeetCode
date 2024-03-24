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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> levelorder;
        queue<TreeNode*> q;

        if(!root) return levelorder;
        q.push(root);

        bool rev = false;

        while(!q.empty()) {
            int n = q.size();
            vector<int> level(n, -101);

            for(int i = 0; i < n; i++) {
                root = q.front();
                q.pop();

                if(root -> left) q.push(root -> left);
                if(root -> right) q.push(root -> right);

                if(rev) level[n - i - 1] = root -> val;
                else level[i] = root -> val;
            }

            levelorder.push_back(level);
            rev = !rev;
        }
        return levelorder;
    }
};