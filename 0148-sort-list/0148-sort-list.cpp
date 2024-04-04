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
        if (!head||!head->next)
            return head;
        ListNode* fast=head->next;
        ListNode* slow=head;
        while(fast&&fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode*cen=slow->next;
        slow->next=NULL;
        ListNode* left_sorted=sortList(head);
        ListNode* right_sorted=sortList(cen);
        return combine(left_sorted,right_sorted);
    }

    ListNode* combine(ListNode* left, ListNode* right){
        ListNode* dodie=new ListNode(0);
        ListNode* current=dodie;
        while(left&&right){
            if (left->val<right->val){
                current->next=left;
                left=left->next;
            } 
            else{
                current->next=right;
                right=right->next;
            }
            current=current->next;
        }
        current->next=left?left:right;
        return dodie->next;
    }
};