class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>>adj(n);
        for(auto it : roads){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        vector<long long>dist(n,1e18);
        vector<int>ways(n,0);
        ways[0]=1;
        dist[0]=0;
        int mod=1e9 + 7;
        priority_queue<pair<long,long>,vector<pair<long,long>>,greater<pair<long,long>>>pq;
        pq.push({0,0}); //wt,node;
        while(!pq.empty()){
            auto [wt,node]=pq.top();
            pq.pop();
            if(wt>dist[node]) continue;
            for(auto it : adj[node]){
                int adjnode=it.first;
                long long adjwt=it.second;
                long long newdist=adjwt+wt;
                if(newdist<dist[adjnode]){
                    dist[adjnode]=newdist;
                    ways[adjnode]=ways[node];
                    pq.push({newdist,adjnode});
                }
                else if(newdist==dist[adjnode]){
                    ways[adjnode]=(ways[node]+ways[adjnode])%mod;
                }
            }
        }
        return ways[n-1];
    }
};