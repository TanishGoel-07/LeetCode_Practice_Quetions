class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        priority_queue<pair<int, pair<int,int>>,vector<pair<int, pair<int,int>>>,greater<pair<int, pair<int,int>>>
        >pq;
        pq.push({0,{0,0}});
        int n=heights.size();
        int m=heights[0].size();
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        vector<vector<int>>dist(n,vector<int>(m,1e9));
        while(!pq.empty()){
            auto it=pq.top();
            int row=it.second.first;
            int col=it.second.second;
            int effort=it.first;
            pq.pop();
            if(row==n-1&&col==m-1) return effort;
            for(int i=0;i<4;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                if(nrow<n&&nrow>=0&&ncol<m&&ncol>=0){
                int absdiff=abs(heights[row][col]-heights[nrow][ncol]);
                int neweffort=max(effort,absdiff);
                if(neweffort<dist[nrow][ncol]){
                    dist[nrow][ncol]=neweffort;
                    pq.push({neweffort,{nrow,ncol}});
                }
                }
            }
        }
        return 0;
    }
};