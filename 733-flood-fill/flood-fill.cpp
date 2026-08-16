class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i,int j,vector<vector<int>>& vis,int color,int inicol){
        vis[i][j]=1;
        grid[i][j]=color;
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        q.push({i,j});
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int k=0;k<4;k++){
                int nrow=delrow[k]+r;
                int ncol=delcol[k]+c;
                if(nrow>=0&&ncol>=0&&nrow<n&&ncol<m&&!vis[nrow][ncol]&&grid[nrow][ncol]==inicol){
                    vis[nrow][ncol]=1;
                    grid[nrow][ncol]=color;
                    q.push({nrow,ncol});
                }
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& grid, int sr, int sc, int color) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int inicol=grid[sr][sc];
        if(inicol==color) return grid;
        dfs(grid,sr,sc,vis,color,inicol);
        return grid;
    }
};