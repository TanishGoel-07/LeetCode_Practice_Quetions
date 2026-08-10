class Solution {
public:
    bool check(int x){
        while(x>0){
            int rem=x%10;
            if(rem==0) return false;
            x=x/10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int>res;
       for(int i=1;i<=n;i++){
        int a=i;
        int b=n-i;
        if(check(a) && check(b)) {res.push_back(i),res.push_back(b);
        return res;}
       } 
       return res;
    }
};