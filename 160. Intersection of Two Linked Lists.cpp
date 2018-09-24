class Solution {
public:
    int getLength(ListNode *node){
        int len = 0;
        while(node!=NULL){
            node = node->next;
            len++;
        }
        
        return len;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA== NULL || headB==NULL){
            return NULL;
        }
        
        ListNode *currA = headA;
        ListNode *currB = headB;
        int n1 = getLength(currA);
        int n2 = getLength(currB);
        
        if((n1-n2) > 0){
            currA = headA;
            currB = headB;
            int l = 0; 
            while(l < (n1-n2) ){
                currA = currA->next;
                l++;
            }
        }
        else if((n1-n2) < 0){
            currA = headB;
            currB = headA;
            int l = 0; 
            while(l < (n2-n1) ){
                currA = currA->next;
                l++;
            }
        }
        
        while(currA!= NULL && currB!=NULL){
            if(currA == currB){
                return currA;
            }
            currA = currA->next;
            currB = currB->next;
        }
        
        return NULL;
    }
};
