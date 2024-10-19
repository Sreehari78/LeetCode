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
    int maxDepth(TreeNode* root) {
        if(!root)
            return 0;

        queue<TreeNode*> q;
        q.push(root);
        int res = 0;

        while(!q.empty()) {
            queue<TreeNode*> q1;

            while(!q.empty()) {
                TreeNode* node = q.front();
                
                if(node->left)
                    q1.push(node->left);
                
                if(node->right)
                    q1.push(node->right);
                
                q.pop();
            }
            q = q1;
            res++;
        }

        return res;
    }
};