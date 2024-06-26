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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp=new ListNode(0);
        ListNode* head=temp;
        int sum=0,carry=0;
        carry=(l1->val+l2->val)/10;
        temp->val=(l1->val+l2->val)%10;
        l1=l1->next;
        l2=l2->next;
        while(l1!=NULL||l2!=NULL||carry>0)
        {
            sum=0;
            if(l1!=NULL)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                sum+=l2->val;
                l2=l2->next;
            }  
            sum+=carry;
            carry=sum/10;
            ListNode* ans=new ListNode(sum%10);
            temp->next=ans;
            temp=temp->next;          
        }
        return head;
    }
};