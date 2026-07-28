class Solution {
public:
    string makeSmallestPalindrome(string s) {
     for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-1-i]){
            char ch=min(s[i],s[s.size()-1-i]);
            s[i]=ch;
            s[s.size()-1-i]=ch;
        }
     }   
     return s;
    }
};