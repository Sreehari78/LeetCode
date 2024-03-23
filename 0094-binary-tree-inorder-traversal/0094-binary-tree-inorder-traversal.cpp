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
    // vector<int> v;

    // void recursiveInorderTraversal(TreeNode* root) {
    //     if(!root) return;
    //     inorderTraversal(root -> left);
    //     v.push_back(root -> val);
    //     inorderTraversal(root -> right);
    // }

    vector<int> inorderTraversal(TreeNode* root) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        vector<int> inorder;
        TreeNode* node = root;
        stack<TreeNode*> st;

        while (true)
            if (node) {
                st.push(node);
                node = node -> left;
            } 
            else {
                if (st.empty())
                    break;

                node = st.top();
                st.pop();
                inorder.push_back(node -> val);
                node = node -> right;
            }

        return inorder;
    }
};