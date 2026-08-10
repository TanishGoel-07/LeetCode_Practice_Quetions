class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        map<string,int>mp;
        for(string i : words){
            sort(i.begin(),i.end());
            mp[i]++;
        }
        int cnt=0;
        for(auto it : mp){
            if(it.second>1){
                cnt++;
            }
        }
        return cnt;
    }
};