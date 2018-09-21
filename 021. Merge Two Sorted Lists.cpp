//链接： https://leetcode.com/problems/merge-two-sorted-lists/
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        //首先必须考虑空的情况,这里是容易遗忘点。
        if (l1 == NULL) {
            return l2;
        }
        if (l2 == NULL) {
            return l1;
        }
        
      
        ListNode * result = NULL;
        ListNode * current = NULL;
        
        if (l1->val <= l2->val ) {
            result = current = l1;
            l1 = l1->next;
        }
        else {
            result = current = l2;
            l2 = l2->next;
        }
        
        
        while (l1 != NULL && l2 != NULL) {
            if (l1->val <= l2->val) {
                current->next = l1;
                current = current->next;
                l1 = l1->next;
            }
            else {
                current->next = l2;
                current = current->next;
                l2 = l2->next;
            }
        }
        
        if (l1 != NULL) {
            current->next = l1;
        }
        
        if (l2 != NULL) {
            current->next = l2;
        }
        
        return result;
    }
};
