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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        queue<pair<TreeNode*, pair<int, int>>> q;
        vector<vector<int>> ans, res;

        ans.push_back({root->val, 0, 0});
        q.push({root, {0, 0}});

        while(!q.empty()) {
            queue<pair<TreeNode*, pair<int, int>>> q1;

            while(!q.empty()) {
                TreeNode* node = q.front().first;
                int x = q.front().second.first, y = q.front().second.second;
                q.pop();

                if(node->left) {
                    q1.push({node->left, {x - 1, y + 1}});
                    ans.push_back({node->left->val, x - 1, y + 1});
                }

                if(node->right) {
                    q1.push({node->right, {x + 1, y + 1}});
                    ans.push_back({node->right->val, x + 1, y + 1});
                }
            }
            q = q1;
        }

        sort(ans.begin(), ans.end(), [](auto& a, auto& b){
            if (a[1] == b[1] && a[2] == b[2])
                return a[0] < b[0];
            
            if(a[1] == b[1])
                return a[2] < b[2];
            
            return a[1] < b[1];
        }); 

        vector<int> temp;
        temp.push_back(ans[0][0]);

        for(int i = 1; i < ans.size(); i++) {
            if(ans[i - 1][1] != ans[i][1]) {
                res.push_back(temp);
                temp.erase(temp.begin(), temp.end());
            }

            temp.push_back(ans[i][0]);
        }
        res.push_back(temp);        
        return res;
    }
};