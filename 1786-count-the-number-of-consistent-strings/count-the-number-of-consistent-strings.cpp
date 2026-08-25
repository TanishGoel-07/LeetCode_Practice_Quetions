class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt=0;
        map<char,int>mp;
        for(char ch : allowed){
            mp[ch]++;
        }
        for(string s : words){
            bool flag=true;
            for(char ch : s){
                if(mp[ch]==0){
                    flag=false;
                    break;
                }
            }
            if(flag) cnt++;
        }
        return cnt;
    }
};