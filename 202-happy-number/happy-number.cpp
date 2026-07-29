class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>vis;
        while(n && !vis.count(n)){
            vis.insert(n);
            int sum=0;
            while(n>0){
                int rem=n%10;
                sum=sum+(rem*rem);
                n=n/10;
            }
            n=sum;
            if(n==1){
                return true;
            }
        }
        return false;
    }
};