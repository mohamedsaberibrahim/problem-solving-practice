/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL)
            return NULL;
        map<Node*, Node*> mappingOldToNewIndices;
        Node* copyHead = new Node(head->val);
        mappingOldToNewIndices[head] = copyHead;
        
        Node* currentOriginal = head->next;
        Node* currentCopy = copyHead;
        
        while(currentOriginal != NULL) {
            Node* newCopy = new Node(currentOriginal->val);
            currentCopy->next = newCopy;
            
            mappingOldToNewIndices[currentOriginal] = newCopy;
            
            currentCopy = currentCopy->next;
            currentOriginal = currentOriginal-> next;
        }
        
        currentCopy = copyHead;
        currentOriginal = head;
        while(currentCopy != NULL) {
            currentCopy->random = mappingOldToNewIndices[currentOriginal->random];
            currentCopy = currentCopy->next;
            currentOriginal = currentOriginal->next;
        }
        
        
        
        return copyHead;
    }
};