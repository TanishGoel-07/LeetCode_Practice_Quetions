class Solution {
public:
    int reverseDegree(string s) {
        char ch='a';
        map<char,int>mp;
        for(int i=26;i>=1;i--){
            mp[ch++]=i;
        }
        int res=0;
        for(int i=0;i<s.size();i++){
            res=res+(mp[s[i]]*(i+1));
        }
        return res;
    }
};