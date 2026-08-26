class Solution {
public:
    bool isprime(int x){
        int cnt=0;
        while(x!=0){
            int temp=x%2;
            if(temp==1) cnt++;
            x=x/2;
        }
        if(cnt==2 || cnt==3 || cnt==5 || cnt==7 || cnt==11 || cnt==13 || cnt==17 || cnt==19)        return true;
        return false;
    }
    int countPrimeSetBits(int left, int right) {
        int cnt=0;
        for(int i=left;i<=right;i++){
            if(isprime(i)==true) cnt++;
        }
        return cnt;
    }
};