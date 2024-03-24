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
    vector<double> averageOfLevels(TreeNode* root) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        vector<double> result;
        queue<TreeNode*> q;

        if(!root) return {0};
        q.push(root);

        while(!q.empty()) {
            int n = q.size();
            double avg = 0;

            for(int i = 0; i < n; i++) {
                root = q.front();
                q.pop();

                if(root -> left) q.push(root -> left);
                if(root -> right) q.push(root -> right);
                avg += root -> val;
            }

            result.push_back(avg / n);
        }

        return result;
    }
};