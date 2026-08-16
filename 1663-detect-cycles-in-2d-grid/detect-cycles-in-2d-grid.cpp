class Solution {
public:
    bool bfs(int r,int c,vector<vector<char>>&grid,vector<vector<int>>&vis){
        vis[r][c]=1;
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<pair<int,int>,pair<int,int>>>q;
        q.push({{r,c},{-1,-1}});
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int prow=q.front().second.first;
            int pcol=q.front().second.second;
            q.pop();
            for(int k=0;k<4;k++){
                int nrow = row + delrow[k];
                int ncol = col + delcol[k];
                if(nrow>=0 && nrow<n &&
                   ncol>=0 && ncol<m &&
                   grid[nrow][ncol]==grid[row][col]){
                    if(!vis[nrow][ncol]){
                        vis[nrow][ncol]=1;
                        q.push({{nrow,ncol},{row,col}});
                    }
                    else if(nrow!=prow || ncol!=pcol){ // if adjnode and parent are not equal but visited that means cycle...
                        return true;
                    }
                }
            }
        }
        return false;
    }
    bool containsCycle(vector<vector<char>>& grid) {
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(!vis[i][j]){
                    if(bfs(i,j,grid,vis)) return true;
                }
            }
        }
        return false;
    }
};