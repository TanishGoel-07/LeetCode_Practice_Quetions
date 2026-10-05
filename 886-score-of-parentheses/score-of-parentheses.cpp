class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        st.push(0);
        int i=0;
        while(i<s.size()){
            if(s[i]=='(') st.push(0);
            else{
                int v=st.top();
                st.pop();
                int w=st.top();
                st.pop();
                st.push(w+max(2*v,1));
            }
            i++;
        }
        return st.top();
    }
};