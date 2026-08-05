class Solution {
public:
    string resultingString(string s) {
        stack<char>stk;
        int r=0;
        while(r<s.size()){
            if(!stk.empty() && (abs(stk.top()-s[r])==1 || abs(stk.top() - s[r]) == 25)) stk.pop();
            else stk.push(s[r]);
            r++;
        }
        string res="";
        while(!stk.empty()){
            res+=stk.top();
            stk.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};