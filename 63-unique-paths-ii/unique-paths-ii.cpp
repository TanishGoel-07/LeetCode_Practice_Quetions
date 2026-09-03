class Solution {
public:
    int f(vector<vector<int>>&dp,int i,int j,vector<vector<int>>& obstacleGrid){
        if(i>=0&&j>=0&&obstacleGrid[i][j]==1) return 0;
        if(i==0 && j==0) return 1;
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int up=f(dp,i-1,j,obstacleGrid);
        int left=f(dp,i,j-1,obstacleGrid);
        return dp[i][j]=up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>>dp(obstacleGrid.size(),vector<int>(obstacleGrid[0].size(),-1));
        return f(dp,obstacleGrid.size()-1,obstacleGrid[0].size()-1,obstacleGrid);
    }
};