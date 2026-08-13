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
        ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
            ListNode* temp=list1;
            int cnt=0;
            while(cnt<a-1){
                temp=temp->next;
                cnt++;
            }
            ListNode* start=temp;
            while(cnt<b){
                temp=temp->next;
                cnt++;
            }
            ListNode* end=temp->next;
            start->next=list2;
            ListNode* temp1=list2;
            while(temp1->next){
                temp1=temp1->next;
            }
            temp1->next=end;
            return list1;
        }
    };