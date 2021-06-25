/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr) {
            return false;
        }
        ListNode* fastPtr = head->next;
        ListNode* slowPtr = head;
        while(fastPtr != nullptr) {
            if(fastPtr == slowPtr) {
                return true;
            }
            if(fastPtr->next && fastPtr->next->next) {
                fastPtr = fastPtr->next->next;
            }
            else {
                break;
            }
            slowPtr = slowPtr->next;
        }
        return false;
    }
};