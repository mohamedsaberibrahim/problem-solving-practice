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
    int getDecimalValue(ListNode* head) {
        string bin_num = "";
        ListNode* curr = head;
        while(curr != nullptr)
        {
            bin_num+=curr->val;
            curr = curr->next;
        }
        int dec_num=0;
        int cnt=0;
        for (int i =bin_num.length()-1 ; i>=0;i-- )
        {
            
            dec_num+=bin_num[i] * pow(2,cnt);
            
            //cout<<pow(bin_num[i],cnt)<< " " << dec_num << endl;
            
            cnt++;
        }
        return dec_num;
    }
};