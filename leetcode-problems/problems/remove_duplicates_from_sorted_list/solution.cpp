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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr) return head;
        ListNode* fast_ptr = head->next;
        ListNode* slow_ptr = head;
        while(fast_ptr != nullptr){
            if(fast_ptr->val == slow_ptr->val){
                slow_ptr->next = fast_ptr->next;
            }
            if(slow_ptr->val != fast_ptr->val){
                slow_ptr = slow_ptr->next;
            }
            
            fast_ptr = fast_ptr->next;
        }
        return head;
    }
};