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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>arr;
        for(int i=0;i<lists.size();i++){
            ListNode * temp=lists[i];
            while(temp){
                arr.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(arr.begin(),arr.end());
        ListNode* dummy=new ListNode(0);
        ListNode* dummynext=dummy;
        for(int i : arr){
            ListNode* temp=new ListNode(i);
            dummynext->next=temp;
            dummynext=dummynext->next;
        }
        return dummy->next;
    }
};