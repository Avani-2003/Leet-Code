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
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        vector<int> arr;
        while(head)
        {
            arr.push_back(head->val);
            head = head->next;
        }
        sort(arr.begin(),arr.end());
        ListNode* ans = new ListNode(0);
        ListNode* temp = ans;
        for(int i=0;i<arr.size();i++)
        {
            ListNode* hold = new ListNode(arr[i]);
            temp->next = hold;
            temp = hold;
        }
        return ans->next;
    }
};