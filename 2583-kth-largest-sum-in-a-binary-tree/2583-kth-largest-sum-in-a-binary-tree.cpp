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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        if(!root)
            return -1;

        queue<TreeNode*> q;
        vector<int> ans;

        q.push(root);
        ans.push_back(root->val);

        while(!q.empty()) {
            queue<TreeNode*> q1;
            int sum = 0;

            while(!q.empty()) {
                TreeNode* node = q.front();
                q.pop();

                if(node->left) {
                    q1.push(node->left);
                    sum += node->left->val;
                }

                if(node->right) {
                    q1.push(node->right);
                    sum += node->right->val;
                }
            }
            q = q1;
            ans.push_back(sum);
        }

        sort(ans.rbegin(), ans.rend());

        return k < ans.size() ? ans[k - 1] : -1;
    }
};