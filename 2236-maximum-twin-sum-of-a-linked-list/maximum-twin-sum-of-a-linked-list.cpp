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
    int pairSum(ListNode* head) {
        ListNode* temp=head;
        vector<int>res;
        while(temp){
            res.push_back(temp->val);
            temp=temp->next;
        }
        int maxi=INT_MIN;
        for(int i=0;i<res.size();i++){
            int sum=0;
            if(i>=0 && i<=((res.size()/2)-1)){
                sum=sum+res[i]+res[res.size()-1-i];
            }
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};