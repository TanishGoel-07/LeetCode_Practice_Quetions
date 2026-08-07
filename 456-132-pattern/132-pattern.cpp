class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int>stk;
        int n = nums.size()-1;
        int l=INT_MIN;
        while(n>=0) {
            if(nums[n]<l)
                return true;

            while(!stk.empty() && nums[n]>stk.top()) {
                l=stk.top();
                stk.pop();
            }
            stk.push(nums[n]);
            n--;
        }
        return false;
    }
};