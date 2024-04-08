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
        ListNode* ans=new ListNode(0);
        ListNode* n=ans;
        int c=0;       
        while (l1||l2 ||c){
            int sum=(l1?l1->val:0)+(l2?l2->val:0)+c;
            c=sum/10;
            sum%=10;
            n->next=new ListNode(sum);
            n=n->next;
            l1=l1?l1->next:nullptr;
            l2=l2?l2->next:nullptr;
        }        
        return ans->next; 
    }
};