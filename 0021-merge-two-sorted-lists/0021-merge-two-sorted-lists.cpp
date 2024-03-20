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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
        ListNode* y=new ListNode(0);
    ListNode* s=y;
    while(list1&&list2){
        if(list1->val<=list2->val){
            s->next=list1;
            list1=list1->next;
        }
        else{
            s->next=list2;
            list2=list2->next;
        }
        s=s->next;
    }
    s->next=list1?list1:list2;
    ListNode* ans=y->next;
    delete y;
    return ans; 
    }
};