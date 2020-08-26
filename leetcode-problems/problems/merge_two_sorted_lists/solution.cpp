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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0);
        ListNode* curr = result;
        while((l1 != nullptr)||(l2 != nullptr)){
            if(l1 == nullptr){
                curr->next = l2;
                return result->next;
            }
            if(l2 == nullptr){
                curr->next = l1;
                return result->next;
            }
            if(l1->val < l2->val){
                curr->next = new ListNode(l1->val);
                l1 = l1->next;
            }
            else{
                curr->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            curr = curr->next;
        }
        return result->next;
    }
};