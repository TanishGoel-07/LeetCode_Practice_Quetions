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
        ListNode*temp=l1;
        ListNode *temp1=l2;
        ListNode* dummy=new ListNode(0);
        ListNode* dummynode=dummy;
        int carry=0;
        while(temp || temp1 || carry){
            int sum = carry;
            if(temp) {sum+=temp->val; temp=temp->next;}
            if(temp1) {sum+=temp1->val; temp1=temp1->next;}
            ListNode* newnode=new ListNode(sum%10);
            carry=sum/10;
            dummynode->next=newnode;
            dummynode=dummynode->next;
        }
        return dummy->next;
    }
};