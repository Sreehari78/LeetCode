/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> res(m, vector<int>(n, -1));
        int i = 0, j = 0, count = 0;

        ListNode* ptr = head;
        while(ptr) {
            while(ptr && j < n - count) {
                res[i][j++] = ptr->val;
                ptr = ptr->next;
            }

            j--;
            i++;

            while(ptr && i < m - count) {
                res[i++][j] = ptr->val;                
                ptr = ptr->next;
            }

            i--;
            j--;

            while(ptr && j > count - 1) {
                res[i][j--] = ptr->val;
                ptr = ptr->next;
            }

            j++;
            i--;
            count++;
            while(ptr && i > count - 1) {
                res[i--][j] = ptr->val;
                ptr = ptr->next;
            }

            i++;
            j++;
            
        }
        return res;
    }
};