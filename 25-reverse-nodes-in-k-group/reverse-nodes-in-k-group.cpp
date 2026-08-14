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
    ListNode* reversell(ListNode* temp){
        ListNode* prev=NULL;
        ListNode* curr=temp;
        while(curr){
            ListNode* front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        return prev;
    }
    ListNode* kthnode(ListNode* temp,int k){
        k-=1;
        while(k && temp){
            k--;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* prev=nullptr;
        ListNode* temp=head;
        while(temp){
            ListNode* knode=kthnode(temp,k);
            if(knode==NULL){
                if(prev){
                    prev->next=temp;
                }
                break;
            }
            ListNode* nextnode=knode->next;
            knode->next=NULL;
            reversell(temp);
            if(temp==head){
                head=knode;
            }
            else{
                prev->next=knode;
            }
            prev=temp;
            temp=nextnode;
        }
        return head;
    }
};