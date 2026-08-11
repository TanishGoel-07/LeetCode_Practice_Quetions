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
    ListNode* deleteMiddle(ListNode* head) {
        int cnt=0;
        ListNode* temp=head;
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        while(temp){
            cnt++;
            temp=temp->next;
        }
        int n=cnt/2;
        ListNode* help=head;
        while(n-1){
            help=help->next;
            n--;
        }
        ListNode* te=help->next;
        help->next=te->next;
        delete te;
        return head;
    }
};