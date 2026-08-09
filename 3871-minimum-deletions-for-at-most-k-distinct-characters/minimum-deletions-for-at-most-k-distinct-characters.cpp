class Solution {
public:
    int minDeletion(string s, int k) {
        map<char,int>mp;
        for(char ch : s){
            mp[ch]++;
        }
        vector<pair<int,int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), [](auto &a, auto &b){
            return a.second < b.second;
        });
        int d=v.size()-k;
        if(d<=0) return 0;
        int cnt=0;
        for(auto it : v){
            while(it.second--) cnt++;
            d--;
            if(d==0) break;
        }
        return cnt;
    }
};