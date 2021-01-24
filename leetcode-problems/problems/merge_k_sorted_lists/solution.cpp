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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> flatten;
        ListNode* head = nullptr;
        ListNode* current = nullptr;
        
        for(int i = 0; i < lists.size(); i++) {
            ListNode* current = lists[i];
            while(current != nullptr) {
                flatten.push_back(current->val);
                
                current = current->next;
            }
        }

        sort(flatten.begin(), flatten.end());
        
        for(int i = flatten.size() - 1; i >= 0 ; i--) {
            head = new ListNode(flatten[i], current);
            current = head;
        }
        
        return head;
    } 
};