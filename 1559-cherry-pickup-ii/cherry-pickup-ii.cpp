class Solution {
public:
    int f(int i,int j1,int j2,int m,vector<vector<int>>& a,vector<vector<vector<int>>>&dp){
        if(j1<0||j2<0||j1>=m||j2>=m) return -1e8;
        if(i==a.size()-1){
            if(j1==j2) return a[i][j1];
            else return a[i][j1]+a[i][j2];
        }
        if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
        int maxi=-1e8;
        for(int dj1=-1;dj1<=1;dj1++){
            int value;
            for(int dj2=-1;dj2<=1;dj2++){
                if(j1==j2) value=a[i][j1];
                else value=a[i][j2]+a[i][j1];
                value+=f(i+1,j1+dj1,j2+dj2,m,a,dp);
                maxi=max(maxi,value);
            }
        }
        return dp[i][j1][j2]=maxi;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        vector<vector<vector<int>>>dp(grid.size(),vector<vector<int>>(grid[0].size(),vector<int>(grid[0].size(),-1)));
        return f(0,0,grid[0].size()-1,grid[0].size(),grid,dp);
    }
};