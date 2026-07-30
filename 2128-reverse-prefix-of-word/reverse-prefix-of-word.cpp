class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char>stk;
        int i=0;
        while(i<word.size()){
            stk.push(word[i]);
            if(word[i]==ch) break;
            i++;
        }
        if(i==word.size()) return word;
        int x=stk.size();
        string res="";
        while(!stk.empty()){
            res+=stk.top();
            stk.pop();
        }
        for(int i=x;i<word.size();i++){
            res+=word[i];
        }
        return res;
    }
};