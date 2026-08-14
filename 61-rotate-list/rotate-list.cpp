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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        vector<int>arr;
        ListNode* temp=head;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int n=arr.size();
        k=k%n;
        vector<int>res(n);
        for(int i=0;i<n;i++){
            res[(i+k)%n]=arr[i];
        }
        temp=head;
        int i=0;
        while(temp){
            temp->val=res[i];
            temp=temp->next;
            i++;
        }
        return head;
    }
};