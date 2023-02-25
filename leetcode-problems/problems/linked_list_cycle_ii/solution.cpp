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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slowPointer = head;
        ListNode* fastPointer = head;

        while(fastPointer && fastPointer->next) {
            slowPointer = slowPointer->next;
            fastPointer = fastPointer->next->next;
            if (slowPointer == fastPointer) {
                break;
            }
        }
        if (fastPointer == NULL || fastPointer->next == NULL) return NULL;
        
        ListNode* startPointer = head;
        int count = 0;
        while(startPointer != slowPointer) {
            startPointer = startPointer->next;
            slowPointer = slowPointer->next;
            count++;
        }
        return startPointer;
    }
};