class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>>adj(n);
        for(auto it : flights){
            adj[it[0]].push_back({it[1],it[2]});
        }
        priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>>pq;
        pq.push({0,src,0}); //cost,src,kth city
        vector<vector<int>>dist(n,vector<int>(k + 2, 1e9)); //cost to reach city at min possible k steps
        while(!pq.empty()){
            auto[cost,node,stops]=pq.top();
            pq.pop();
            if(node==dst) return cost;
            if(stops>k) continue;
            for(auto it : adj[node]){
                int adjnode=it.first;
                int nodecost=it.second;
                int newcost=nodecost+cost;
                if(newcost<dist[adjnode][stops+1]){
                    dist[adjnode][stops+1]=newcost;
                    pq.push({newcost,adjnode,stops+1}); 
                }
            }
        }
        return -1;
    }
};