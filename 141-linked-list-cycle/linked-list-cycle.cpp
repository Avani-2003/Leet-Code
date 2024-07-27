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
    bool hasCycle(ListNode *head) {
        // if(head==NULL || head->next==NULL) return false;
        // if(head->next==head) return true;
        ListNode* temp = head;
        while(temp && temp->next)
        {
            // cout<<head->val<<" "<<temp->val;
            head=head->next;
            temp=temp->next->next;
            if(temp==head) return true;
        }
        return false;
    }
};