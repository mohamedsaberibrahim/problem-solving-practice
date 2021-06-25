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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*, int> visited_nodes;
        ListNode* skipA = headA;
        ListNode* skipB = headB;
        
        while(skipA != nullptr || skipB != nullptr) {

            if(visited_nodes[skipA] == 1) {
                return skipA;
            }
            else if(skipA != nullptr){
                visited_nodes[skipA] = 1;
            }
            
            if(visited_nodes[skipB] == 1) {
                return skipB;
            }
            else if (skipB != nullptr){
                visited_nodes[skipB] = 1;
            }
            if(skipA != nullptr) {
                skipA = skipA->next;
            }
            
            if(skipB != nullptr) {
                skipB = skipB->next;
            }
            
        }
        return nullptr;
    }
};