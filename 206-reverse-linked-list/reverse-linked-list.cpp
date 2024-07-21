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
    ListNode* reverseList(ListNode* head1) {
        
        ListNode *head = head1;
        
          ListNode *dummy = NULL;
          while(head!=NULL)
          {
            ListNode *next1 = head->next;
            head->next = dummy;
            dummy = head;
            head = next1;
          }  
          return dummy;    
    }

    
};