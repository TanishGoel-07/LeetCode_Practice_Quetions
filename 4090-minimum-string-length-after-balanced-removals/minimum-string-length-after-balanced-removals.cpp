class Solution {
public:
    int minLengthAfterRemovals(string s) {
        stack<char>stk;
        int r=0;
        while(r<s.size()){
            if(!stk.empty() && (stk.top()!=s[r])){
                stk.pop();
            }
            else{
                stk.push(s[r]);
            }
            r++;
        }
        return stk.size();
    }
};