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
    ListNode* addTwoNumbers(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        ListNode* ans = new ListNode(0);
        ListNode* result = ans;
        int carry = 0;
        int res = list1->val + list2->val;
        carry = res / 10;
        res = res % 10;
        list1 = list1->next;
        list2 = list2->next;
        result->val = res;
        // ListNode* temp1 = new ListNode(res);
        // result=temp1;
        // cout<<result->val;
        while(list1 && list2)
        {
            int res = list1->val + list2->val + carry;
            carry = res / 10;
            res = res % 10;
            list1 = list1->next;
            list2 = list2->next;
            ListNode* temp = new ListNode(res);
            result->next = temp;
            // cout<<result->val;
            result = result->next;
        } 
        while(list1)
        {
            int res = list1->val + carry;
            list1 = list1->next;
            carry = res / 10;
            res = res % 10;
           ListNode* temp = new ListNode(res);
           result->next = temp;
           result = result->next; 
        }
        while(list2)
        {
            int res = list2->val + carry;
            list2 = list2->next;
            carry = res / 10;
            res = res % 10;
           ListNode* temp = new ListNode(res);
           result->next = temp;
           result = result->next; 
        }
        if(carry!=0)
        {
           ListNode* temp = new ListNode(carry);
           result->next = temp;
        //    result = result->next; 
        }
        // cout<<result->val; 
        return ans;    
    }
};