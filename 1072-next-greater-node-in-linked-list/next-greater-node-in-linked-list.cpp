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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>res;
        ListNode* temp=head;
        while(temp){
            stack<int>stk;
            stk.push(temp->val);
            ListNode* curr=temp;
            while(curr){
                if(!stk.empty() && curr->val>stk.top()){ stk.pop(); stk.push(curr->val); break;}
                curr=curr->next;
            }
            if(stk.top()==temp->val) res.push_back(0);
            else res.push_back(stk.top());
            temp=temp->next;
        }
        return res;
    }
};