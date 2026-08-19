class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& h) {
        vector<int>res;
	queue<int>q;
    int N=numCourses;
	vector<int>indegree(N,0);
    vector<vector<int>>adj(numCourses);
    for(auto it : h){
        int u=it[0];
        int v=it[1];
        adj[v].push_back(u);
    }
		for(int i=0;i<N;i++){
			for(auto it : adj[i]){
				indegree[it]++;
			}
		}
		for(int i=0;i<N;i++){
			if(indegree[i]==0){
				q.push(i);
			}
		}
		while(!q.empty()){
			int node=q.front();
			q.pop();
			res.push_back(node);
			for(auto it : adj[node]){
					indegree[it]--;
				if(indegree[it]==0){
					q.push(it);
				}
			}
		}
        if(res.size()!=numCourses) return {};
    	return res;
    }
};