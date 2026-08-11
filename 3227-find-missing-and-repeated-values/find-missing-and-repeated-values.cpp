class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int>mp;
        int c=0;
        vector<int>res;
        for(int i=0;i<grid.size();i++){
            c=grid[i].size();
            for(int j=0;j<grid[i].size();j++){
                mp[grid[i][j]]++;
            }
        }
        c=c*c;
        int repeated = -1, missing = -1;
        for(int i=1;i<=c;i++){
            if(mp[i]==2) repeated=i;
            if(mp[i]==0) missing=i;
        }
        res.push_back(repeated);
        res.push_back(missing);
        return res;
    }
};