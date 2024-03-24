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
        if(n==1&&!head->next)
            return nullptr;

        ListNode* slow=head;
        ListNode* fast=head;
        for(int i=0;i<n;i++){
            if(fast)
                fast=fast->next;
            else
                return head;
    }

    ListNode* prev=nullptr;
    while(fast){
      prev=slow;
      slow=slow->next;
      fast=fast->next;
    }
    if(!prev)
      return head->next;
        
    prev->next = slow->next;
    return head;
    }
};