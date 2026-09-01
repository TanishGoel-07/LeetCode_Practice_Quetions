class Solution {
public:
    unordered_map<int,int> mp;
    bool f(int ind, int jump, vector<int>& stones,
           vector<vector<int>>& dp) {
        if(ind == stones.size()-1)
            return true;
        if(dp[ind][jump] != -1)
            return dp[ind][jump];
        bool left = false, mid = false, right = false;
        if(jump > 1) {
            int pos = stones[ind] + jump - 1;
            if(mp.find(pos) != mp.end())
                left = f(mp[pos], jump-1, stones, dp);
        }
        {
            int pos = stones[ind] + jump;
            if(mp.find(pos) != mp.end())
                mid = f(mp[pos], jump, stones, dp);
        }
        {
            int pos = stones[ind] + jump + 1;
            if(mp.find(pos) != mp.end())
                right = f(mp[pos], jump+1, stones, dp);
        }
        return dp[ind][jump] = (left || mid || right);
    }

    bool canCross(vector<int>& stones) {
        if(stones[1] != 1)
            return false;
        for(int i = 0; i < stones.size(); i++)
            mp[stones[i]] = i;
        vector<vector<int>> dp(stones.size(),
                               vector<int>(stones.size()+1, -1));

        return f(1, 1, stones, dp);
    }
};