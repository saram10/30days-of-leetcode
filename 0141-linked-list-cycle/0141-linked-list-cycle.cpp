/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head||!head->next)
            return false;
        ListNode *fi=head->next;
        ListNode *se=head;
        while(fi!=se){
            if(!fi||!fi->next)
                return false;
            fi=fi->next->next;
            se=se->next;
        }
        return true;
    }
};