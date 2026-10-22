class Solution {
public:
    int helper(int ind,vector<int>&coins,int target,vector<vector<int>>&dp){
        if(ind==0){
            if(target%coins[ind]==0) return target/coins[ind];
            else return 1e9;
        }
        if(dp[ind][target]!=-1)
            return dp[ind][target];
        int nottaken=0+helper(ind-1,coins,target,dp);
        int taken=INT_MAX;
        if(coins[ind]<=target){
            taken=1+helper(ind,coins,target-coins[ind],dp);
        }
        return dp[ind][target]=min(taken,nottaken);
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        int ans=helper(coins.size()-1,coins,amount,dp);
        return ans>=1e9?-1:ans;
    }
};