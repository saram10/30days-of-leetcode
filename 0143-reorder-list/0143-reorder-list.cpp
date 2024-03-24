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
    void reorderList(ListNode* head) {
        ListNode* s=head;
        ListNode* f=head->next;
        while(f&&f->next){
            s=s->next;
            f=f->next->next;
        }
        ListNode* p=nullptr;
        ListNode* c=s?s->next:nullptr;
        while(c){
            ListNode* nt=c->next;
            c->next=p;
            p=c;
            c=nt;
        }
        ListNode* nh=head;
        while(p){
            ListNode* nt=nh->next;
            nh->next=p;
            p=p->next;
            nh->next->next=nt;
            nh=nh->next->next;
        }
        if(nh)
            nh->next=nullptr;
    }
};