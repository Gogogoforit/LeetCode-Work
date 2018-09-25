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
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummyHead(0);
        ListNode * res = &dummyHead;
        int carry = 0;
        while(l1 || l2) {
            int num1 = (l1) ?l1->val : 0; //get val if exists, else 0 is a place holder
            int num2 = (l2) ?l2->val : 0;
            int temp = (num1 + num2 + carry) % 10;
            carry = (num1 + num2 + carry) / 10;
            res->next = new ListNode(temp);
            l1 = (l1) ? l1->next : NULL; //if there are still items in l1
            l2 = (l2) ? l2->next : NULL; //if there are still items in l2
            res = res->next;
        }
        if(carry != 0)
            res->next = new ListNode(1);
        return dummyHead.next;
    }
};
