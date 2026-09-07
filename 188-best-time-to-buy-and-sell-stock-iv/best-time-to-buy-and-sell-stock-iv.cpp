class Solution {
public:
    int f(vector<int>&prices,int buy,int ind,int remains,vector<vector<vector<int>>>&dp){
        if(ind==prices.size()) return 0;
        if(remains==0) return 0;
        if(dp[ind][buy][remains]!=-1) return dp[ind][buy][remains];
        if(buy){
            return dp[ind][buy][remains]=max((-prices[ind]+f(prices,0,ind+1,remains,dp)),(0+f(prices,1,ind+1,remains,dp)));
        }
        return dp[ind][buy][remains]=max((prices[ind]+f(prices,1,ind+1,remains-1,dp)),(0+f(prices,0,ind+1,remains,dp)));
    }
    int maxProfit(int k, vector<int>& prices) {
        vector<vector<vector<int>>>dp(prices.size(),vector<vector<int>>(2,vector<int>(k+1,-1)));
        return f(prices,1,0,k,dp);
    }
};