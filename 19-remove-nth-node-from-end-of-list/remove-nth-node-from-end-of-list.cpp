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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=1;
        ListNode* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            count++;
        }
        count = count - n;
        if(count==0)
        {
            ListNode* ans = head->next;
            delete(head);
            return ans;
        }
        ListNode* ans = head;
        for(int i=1;i<count;i++)
        {
            ans=ans->next;
        }
        cout<<count<<endl;
        if(ans==NULL || ans->next==NULL) return NULL;
        if(ans->next!=NULL && ans!=NULL) ans->next=ans->next->next;
        // cout<<ans->next->next<<endl;
        // if(ans->)
        // ans->next = NULL;
        // ListNode* del = temp->next;
        // if(ans->next->next!=NULL && ans->next!=NULL)
        // ans->next = ans->next->next;
        // else ans->next=NULL;
        // delete(temp);
        return head;
    }
};