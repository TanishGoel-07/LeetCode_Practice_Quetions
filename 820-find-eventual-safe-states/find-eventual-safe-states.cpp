class Solution {
public:
    bool dfs(int i,vector<vector<int>>&graph,vector<int>&vis,vector<int>&path,vector<int>&check){
        vis[i]=1;
        check[i]=0;
        path[i]=1;
        for(auto it : graph[i]){
            if(!vis[it]){
                if(dfs(it,graph,vis,path,check)==true){
                    check[i]=0;
                    return true;
                }
            }
            else if(path[it]){
                check[i]=0;
                return true;
            }
        }
        check[i]=1;
        path[i]=0;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>vis(graph.size(),0);
        vector<int>path(graph.size(),0);
        vector<int>check(graph.size(),0);
        for(int i=0;i<graph.size();i++){
            if(!vis[i]){
                dfs(i,graph,vis,path,check);
            }
        }
        vector<int>res;
        for(int i=0;i<graph.size();i++){
            if(check[i]==1){
                res.push_back(i);
            }
        }
        return res;
    }
};