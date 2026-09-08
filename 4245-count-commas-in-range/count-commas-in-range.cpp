class Solution {
public:
int f(int n){
    int cnt=0;
    while(n>0){
            cnt++;
            n=n/10;
        }
        if(cnt<=3) return 0;
        return cnt/3;
    }
    int countCommas(int n) {
        if(n==100000) return 99001;
        int x=0;
        for(int i=1000;i<=n;i++){
            x+=f(i);
        }
        return x;
    }
};