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
    int pairSum(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        vector<int> nums;
        ListNode* ptr = head;

        while(ptr) {
            nums.push_back(ptr -> val);
            ptr = ptr -> next;
        }

        int result = 0, left = 0, right = nums.size() - 1;
        
        while(left < right) result = max(result, nums[left++] + nums[right--]);

        return result;
    }
};