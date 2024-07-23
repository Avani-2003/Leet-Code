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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result;
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
            if(list1->val>list2->val)
            {
                ListNode* temp = new ListNode(list2->val);
                result = temp;
                // result = temp;
                list2 = list2->next;
            }
            else
            {
                ListNode* temp = new ListNode(list1->val);
                result = temp;
                // result = temp;
                list1 = list1->next;
            }
        ListNode* ans = result;
        while(list1 && list2)
        {
            if(list1->val>list2->val)
            {
                ListNode* temp = new ListNode(list2->val);
                ans->next = temp;
                ans = ans->next;
                list2 = list2->next;
            }
            else
            {
                ListNode* temp = new ListNode(list1->val);
                ans->next = temp;
                ans = ans->next;
                list1 = list1->next;
            }
        }
        if(list1==NULL)
        {
            while(list2)
            {
                ListNode* temp = new ListNode(list2->val);
                ans->next = temp;
                ans = ans->next;
                list2 = list2->next;
            }
        }
        if(list2==NULL)
        {
            while(list1)
            {
                ListNode* temp = new ListNode(list1->val);
                ans->next = temp;
                ans = ans->next;
                list1 = list1->next;
            }
        }
        return result;
    }
};