class Solution {
public:
    int minChanges(int n, int k) {
        int cnt=0;
        for(int i=0;i<32;i++){
            if((n&(1<<i))==(k&(1<<i))) continue;
            else if((n&(1<<i))!=0 && (k&(1<<i))==0) {cnt++;}
            else return -1;
        }
        return cnt;
    }
};