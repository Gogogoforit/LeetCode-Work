//Method 1: Two-pass approach
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      
        ListNode* p = head;
        int Length = 0;
        int cur = 1;
        while(p != NULL){
            p = p->next;
            Length++;
        }
        
        int index = Length - n;
        if (0 == index) {
            head = head->next;
        } else {
            p = head;
            while (--index) {
                p = p->next;
            }
            p->next = p->next->next;
        }
        return head;
    }
};


//Method: one-pass approach
