class Solution {
public:
    int f(int i,int j,vector<vector<int>>& triangle,int n,vector<vector<int>>&dp){
        if(i==n) return triangle[n][j];
        if(dp[i][j]!=INT_MAX) return dp[i][j];
        int down=triangle[i][j]+f(i+1,j,triangle,n,dp);
        int diagonal=triangle[i][j]+f(i+1,j+1,triangle,n,dp);
        return dp[i][j]=min(down,diagonal);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>>dp(triangle.size());
        for(int i=0;i<triangle.size();i++){
            dp[i].resize(triangle[i].size(),INT_MAX);
        }
        return f(0,0,triangle,triangle.size()-1,dp);
    }
};