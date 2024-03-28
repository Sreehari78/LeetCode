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
    int x = 0, y = 0;
    vector<pair<TreeNode*, pair<int, int>>> vec;

    void preOrder(TreeNode* root, int x, int y) {
        if (!root)
            return;
        vec.push_back({root, {x, y}});
        preOrder(root->left, x - 1, y + 1);
        preOrder(root->right, x + 1, y + 1);
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        preOrder(root, 0, 0);
        sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
            if(a.second.first == b.second.first && a.second.second == b.second.second)
                return (a.first -> val < b.first -> val);
            if (a.second.first == b.second.first)
                return (a.second.second < b.second.second);
            else
                return (a.second.first < b.second.first);
        });

        for(auto it: vec) cout<< it.first -> val << " " << it.second.first << " " << it.second.second << endl;
        vector<vector<int>> result;
        int left = vec[0].second.first, right = vec[vec.size() - 1].second.first, i = 0;

        while (left < right) {
            vector<int> ans;
            left = vec[i].second.first;

            for (;i < vec.size() && vec[i].second.first == left; i++)
                ans.push_back(vec[i].first->val);            
            result.push_back(ans);
        }

        return result;
    }
};