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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL) return NULL;
        ListNode* temp=headA;
        ListNode* temp1=headB;
        while(temp!=temp1){
            temp=temp->next;
            temp1=temp1->next;
            if(temp==temp1) return temp;
            if(temp==NULL) temp=headB;
            if(temp1==NULL) temp1=headA;
        }
        return temp;
    }
};