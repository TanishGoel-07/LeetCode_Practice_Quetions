class Solution {
public:
    int mod=1e9+7;
    int dp[5001][4][4][4];
    long long solve(int ind,int n,int p1,int p2,int p3){
        if(ind==n) return 1;
        if(dp[ind][p1][p2][p3]!=-1) return dp[ind][p1][p2][p3];
        long long ans=0;
        for(int c1=0;c1<3;c1++){
            if(c1==p1) continue;
            for(int c2=0;c2<3;c2++){
                if(c2==p2 || c2==c1) continue;
                for(int c3=0;c3<3;c3++){
                    if(c3==p3 || c3==c2) continue;
                    ans=(ans+solve(ind+1,n,c1,c2,c3))%mod;
                }
            }
        }
        return dp[ind][p1][p2][p3]=ans;
    }
    int numOfWays(int n) {
        memset(dp, -1, sizeof(dp));
        return solve(0, n, 3, 3, 3);
    }
};