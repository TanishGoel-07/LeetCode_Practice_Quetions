class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int fresh=0;
        int cnt=0;
        queue<pair<int,int>>q;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==2) q.push({i,j});
                if(grid[i][j]==1) fresh++;
            }
        }
        if(fresh==0) return 0;
        int time=0;
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        while(!q.empty() && fresh>0){
            int sz=q.size();
            for(int i=0;i<sz;i++){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            vis[r][c]=1;
            for(int k=0;k<4;k++){
                int nrow = r + delrow[k];
                int ncol = c + delcol[k];
                if(nrow>=0 && ncol>=0 &&
                   nrow<n && ncol<m &&
                   grid[nrow][ncol]==1 &&
                   vis[nrow][ncol]!=1){
                    grid[nrow][ncol]=2;
                    vis[nrow][ncol]=1;
                    fresh--;
                    q.push({nrow,ncol});
                }
            }
            }
            time++;
        }
        if(cnt==fresh) return time;
        return -1;
    }
};