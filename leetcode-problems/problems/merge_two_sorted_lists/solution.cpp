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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL && list2 == NULL) return list1;
        ListNode* mergedList = new ListNode(0); 
        ListNode* currentPointerList1 = list1;
        ListNode* currentPointerList2 = list2;
        ListNode* pointerMergedList = mergedList;
        int currentValList1 = -101;
        int currentValList2 = -101;
        while(currentPointerList1 || currentPointerList2) {
            if (currentPointerList1) {
                currentValList1 = currentPointerList1->val;
            } else {
                currentValList1 = 101;
            }
            if (currentPointerList2) {
                currentValList2 = currentPointerList2->val;
            } else {
                currentValList2 = 101;
            }
            if (currentValList1 >= currentValList2) {
                pointerMergedList->next = new ListNode(currentValList2);
                if (currentValList2 != 101) currentPointerList2 = currentPointerList2->next;
            }
            else if (currentValList1 < currentValList2) {
                pointerMergedList->next = new ListNode(currentValList1);
                if (currentValList1 != 101) currentPointerList1 = currentPointerList1->next;
            }
            pointerMergedList = pointerMergedList->next;
        }
        return mergedList->next;
    }
};