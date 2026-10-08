class Solution {
public:
    string removeOuterParentheses(string s) {
        string m="";
        int count=0;
        for(char ch : s){
            if(ch=='('){
                count++;
                if(count>1){
                    m+=ch;
                }
            }
            else{
                count--;
                if(count>0){
                    m+=ch;
                }
            }
        }
        return m;
    }
};