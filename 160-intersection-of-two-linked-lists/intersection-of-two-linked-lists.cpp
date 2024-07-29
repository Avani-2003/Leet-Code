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
        // if(headA==headB) return headA;
        ListNode* temp = headB;
        while(headA)
        {
            headB = temp;
            while(headB)
            {
                // cout<<headA->val<<" ";
                if(headA==headB) return headA;
                headB = headB->next;
            }
            headA = headA->next;
        }
        return NULL;
    }
};