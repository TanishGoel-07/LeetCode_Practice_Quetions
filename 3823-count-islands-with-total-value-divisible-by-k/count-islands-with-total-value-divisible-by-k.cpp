class Solution {
public:
    long long bfs(int row,int col,vector<vector<int>>&grid,vector<vector<int>>&vis){
        vis[row][col]=1;
        queue<pair<int,int>>q;
        int n=grid.size();
        int m=grid[0].size();
        long long sum=0;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        q.push({row,col});
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            sum+=grid[r][c];
            for(int k=0;k<4;k++){
                int nrow=delrow[k]+r;
                int ncol=delcol[k]+c;
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]!=0 && !vis[nrow][ncol]){
                    q.push({nrow,ncol});
                    vis[nrow][ncol]=1;
                }
            }
        }
        return sum;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int cnt=0;
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(!vis[row][col] && grid[row][col]!=0){
                    long long sum = bfs(row,col,grid,vis);
                    if(sum%k==0){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};