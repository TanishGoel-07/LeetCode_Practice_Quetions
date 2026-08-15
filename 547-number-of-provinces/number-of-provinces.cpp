class Solution {
public:
    void dfs(vector<int> &vis,vector<vector<int>>& isConnected,int i){
        vis[i]=1;
        for(int j=0;j<isConnected.size();j++){
            if(isConnected[i][j]==1 && vis[j]==0){
                dfs(vis,isConnected,j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int> vis(n,0);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                cnt++;
                dfs(vis,isConnected,i);
            }
        }
        return cnt;
    }
};