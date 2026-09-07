class Solution {
public:
    int f(vector<int>&prices,int buy,int ind,vector<vector<int>>&dp){
        if(ind>=prices.size()) return 0;
        if(dp[ind][buy]!=-1) return dp[ind][buy];
        long profit=0;
        if(buy){
            profit=max((-prices[ind]+f(prices,0,ind+1,dp)),(0+f(prices,1,ind+1,dp)));
        }
        else{
            profit=max((prices[ind]+f(prices,1,ind+2,dp)),(0+f(prices,0,ind+1,dp)));
        }
        return dp[ind][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>>dp(prices.size()+1,vector<int>(2,-1));
        return f(prices,1,0,dp);
    }
};