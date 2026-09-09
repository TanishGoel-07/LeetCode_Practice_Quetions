class Solution {
public:
    long long countCommas(long long n) {
        long long s=1000;
        long long ans=0;
        while(s<=n){
            long long e=min(n,s*10-1);
            long long c=(to_string(s).size()-1)/3;
            ans+=(e-s+1)*c;
            s=s*10;
        }
        return ans;
    }
};