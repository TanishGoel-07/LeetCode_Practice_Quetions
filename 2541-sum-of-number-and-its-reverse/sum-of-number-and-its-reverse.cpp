class Solution {
public:
    bool sumOfNumberAndReverse(int n) {
        if(n==0) return true;
        set<int>st;
        int x=n;
        for(int i=1;i<=n;i++){
            int sum=0;
            int ts=i;
            int temp=i;
            while(temp>0){
                int rem=temp%10;
                sum=sum*10+rem;
                temp/=10;
            }
            ts=ts+sum;
            if(ts==x) return true;
        }
        return false;
    }
};