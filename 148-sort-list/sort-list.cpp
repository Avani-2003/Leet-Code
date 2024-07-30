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
    ListNode* middle(ListNode* head)
    {
        if(head==NULL || head->next==NULL) return head;
        ListNode* slow = head, *fast = head->next;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* left, ListNode* right)
    {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        while(left && right)
        {
            if(left->val<=right->val)
            {
                temp->next = left;
                left = left->next;
            }
            else{
                temp->next = right;
                right = right->next;
            }
            temp = temp->next;
        }
        if(left!=NULL)
            temp->next = left;
        else temp->next = right;
        return dummy->next;
    }

    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* left = head;
        ListNode* mid = middle(head);
        ListNode* right = mid->next;
        mid->next = NULL;
        left = sortList(left);
        right = sortList(right);
        return merge(left, right);
    }
};