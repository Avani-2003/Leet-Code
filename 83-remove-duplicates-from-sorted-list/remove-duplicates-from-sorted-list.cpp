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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        ListNode* result = new ListNode(head->val);
        ListNode* ans = result;
        while(head)
        {
            if(ans->val!=head->val)
            {
                ListNode* temp = new ListNode(head->val);
                ans->next = temp;
                ans = temp;
            }
            head = head->next;
        }
        return result;
    }
};