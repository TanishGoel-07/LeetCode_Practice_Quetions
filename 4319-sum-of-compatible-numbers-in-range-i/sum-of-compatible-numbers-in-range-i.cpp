class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int sum=0;
        int maxi=max(1,n-k);
        for(int x=maxi;x<=n+k;x++){
            if(abs(n-x)<=k && (n&x)==0){
                sum+=x;
            }
        }
        return sum;
    }
};