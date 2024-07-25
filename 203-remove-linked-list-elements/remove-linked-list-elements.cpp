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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        if(head->val==val)
        {
            while(head->val==val )
            {
                if(head->next==NULL) return NULL;
                head=head->next;
            }
        }
        // return head;
        ListNode* prev = head;
        while(prev->next)
        {
            if(prev->next->val==val)
            {
                if(prev->next->next==NULL) {
                    prev->next=NULL;
                    break;
                }
                prev->next = prev->next->next;
                continue;
            }
            prev = prev->next;
        }
        return head;
        
    }
};