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
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp=head;
        stack<int>stk;
        while(temp){
            while(!stk.empty()&&stk.top()<temp->val) stk.pop(); 
            stk.push(temp->val);
            temp=temp->next;
        }
        vector<int>res;
        while(!stk.empty()){
            res.push_back(stk.top());
            stk.pop();
        }
        reverse(res.begin(),res.end());
        ListNode* dummy = new ListNode(0);
        temp = dummy;
        for(int x : res) {
            temp->next = new ListNode(x);
            temp = temp->next;
        }
        return dummy->next;
        return head;
    }
};