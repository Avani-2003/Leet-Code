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
        ListNode* ans = new ListNode(-1);
        ListNode* result = ans;
        int flag = head->val , count=1;
        head = head->next;
        while(head->next)
        {
            if(head->val==flag) count++;
            else if(count==1)
            {
                ListNode* temp = new ListNode(flag);
                result->next = temp;
                result = temp;
                flag = head->val;
                count = 1;                
            }
            else{
                flag = head->val;
                count=1;
            }
            cout<<flag<<" "<<count<<endl;
            head = head->next;
        }  
        if(flag!=head->val)
        {
            if(count==1)
            {
                ListNode* temp = new ListNode(flag);
                result->next = temp;
                result = temp;
                ListNode* temp1 = new ListNode(head->val);
                result->next = temp1;
                result = temp;
            }
            else{
                ListNode* temp = new ListNode(head->val);
                result->next = temp;
                result = temp;
            }
        }
        cout<<head->val<<endl;
        return ans->next;      
    }
};