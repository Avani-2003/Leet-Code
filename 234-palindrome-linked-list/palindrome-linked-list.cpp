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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode* temp = head;
        ListNode* rev = NULL;
        while(temp)
        {
            ListNode* hold = new ListNode(temp->val);
            // cout<<"T: "<<temp->val<<endl;
            hold->next = rev;
            rev = hold;
            temp = temp->next;
            // temp = temp->next;
            // hold->next = rev;
            // rev = hold;
        }
        // cout<<"M "<<head->next->val;
        while(rev && head)
        {
            cout<<rev->val<<" "<<head->val<<endl;
            if(head->val!=rev->val) return false;
            rev = rev->next;
            head = head->next;
        }
        return true;
    }
};