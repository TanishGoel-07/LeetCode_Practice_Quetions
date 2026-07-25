class Solution {
public:
    int maxProduct(int n) {
        vector<int>res;
        while(n>0){
            int rem=n%10;
            res.push_back(rem);
            n/=10;
        }
        sort(res.begin(),res.end());
        return res[res.size()-1]*res[res.size()-2];
    }
};