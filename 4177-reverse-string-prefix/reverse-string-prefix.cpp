class Solution {
public:
    string reversePrefix(string s, int k) {
        if(k==s.size()){
            reverse(s.begin(),s.end());
            return s;
        }
        int i=0;
        stack<int>stk;
        while(i<k){
            stk.push(s[i]);
            i++;
        }
        string res="";
        while(!stk.empty()){
            res+=stk.top();
            stk.pop();
        }
        for(int i=k;i<s.size();i++){
            res+=s[i];
        }
        return res;
    }
};