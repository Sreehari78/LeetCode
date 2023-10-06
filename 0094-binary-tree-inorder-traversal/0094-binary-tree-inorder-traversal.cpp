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
        
        stack<TreeNode*> st;
        TreeNode* node = root;
        vector<int> v;

        while(true) {
            if(node) {
                st.push(node);
                node = node -> left;
            }
            else {
                if(st.empty()) break;
                node = st.top();
                v.push_back(node -> val);
                st.pop();
                node = node -> right;
            }
        }
 
        return v;
    }
};