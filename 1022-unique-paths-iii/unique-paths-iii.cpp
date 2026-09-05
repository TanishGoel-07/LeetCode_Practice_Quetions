class Solution {
public:
int ans=0;
int emptycells=0;
void f(int i,int j,int remain,vector<vector<int>>&grid){
        int n=grid.size();
        int m=grid[0].size();
        if(grid[i][j]==2){
            if(remain==0) ans++;
            return;
        }
        int temp=grid[i][j];
        grid[i][j]=-1; //visited
        int delrow[]={-1,1,0,0};
        int delcol[]={0,0,1,-1};
        for(int k=0;k<4;k++){
            int nrow=delrow[k]+i;
            int ncol=delcol[k]+j;
            if(nrow>=0&&ncol>=0&&nrow<n&&ncol<m&&grid[nrow][ncol]!=-1){
                f(nrow,ncol,remain-1,grid);
            }
        }
        grid[i][j]=temp; //backtrak
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int sx,sy;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]!=-1) emptycells++;
                if(grid[i][j]==1) sx=i,sy=j;
            }
        }
        f(sx,sy,emptycells-1,grid);
        return ans;
    }
};