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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp = new ListNode(0);
        ListNode* ans = temp;
        while(head)
        {
            if(head->next!=NULL)
            {
                ListNode* temp1 = new ListNode(head->next->val);
                temp->next = temp1;
                temp = temp->next;
            }
                ListNode* temp2 = new ListNode(head->val);
                temp->next = temp2;
                temp = temp->next;
            if(head->next==NULL) break;
            // cout
            // if(head->next!=NULL)
            // if(flag = 1) break;
            head = head->next->next;           
        }        
        return ans->next;
    }
};