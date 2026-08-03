class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int>stk;
        for(char ch : s){
            if(ch=='(') stk.push(ch);
            if(ch==')'){
                if(stk.empty() || stk.top()==')') stk.push(ch);
                else if(!stk.empty() && stk.top()=='(') stk.pop();
            }
        }
        return stk.size();
    }
};