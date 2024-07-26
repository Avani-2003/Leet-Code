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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0) return head;
        ListNode* temp = head;
        ListNode* last = NULL;
        int count=1;
        while(temp->next)
        {
            count++;
            temp=temp->next;
        }
        last = temp;
        // cout<<last->next;
        k = k%count;
        cout<<count;
        if(k==0) return head;
        temp = head;
        for(int i=0;i<count-k-1;i++)
        temp = temp->next;
        ListNode* hold = temp->next;
        cout<<hold->val;
        temp->next = NULL;
        last->next = head;
        return hold;
    }
};