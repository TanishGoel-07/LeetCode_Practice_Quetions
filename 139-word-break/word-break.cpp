class Solution {
public:
    bool helper(int i,string &s,unordered_set<string>&mp,vector<int>&dp){
        if(i==s.size()) return true;
        string word="";
        if(dp[i]!=-1) return dp[i];
        for(int ind=i;ind<s.size();ind++){
            word+=s[ind];
            if(mp.find(word)!=mp.end()&&helper(ind+1,s,mp,dp)) return dp[i]=1;
        }
        return dp[i]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>mp;
        for(string i : wordDict){
            mp.insert(i);
        }
        vector<int>dp(s.size(),-1);
        return helper(0,s,mp,dp);
    }
};