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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || k==1) return head;
        ListNode* dummy = new ListNode(0,head);
        ListNode* nex = dummy, *pre = dummy, *curr = dummy;
        int count = 1;
        while(head->next)
        {
            head = head->next;
            count++;
        }
        cout<<count;
        count = count/k;
        
        while(count--)
        {
            curr = pre->next;
            nex = curr->next;
            for(int i=1;i<k;i++)
            {
                curr->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = curr->next;
            }
            pre = curr;
        }
        return dummy->next;
    }
};