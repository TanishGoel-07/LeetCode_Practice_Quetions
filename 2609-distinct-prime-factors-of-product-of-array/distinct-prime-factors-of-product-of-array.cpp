class Solution {
public:
    void prime(int n,set<int>& st){
        for(int i = 2; i <= n; i++) {
                while(n % i == 0) {
                    st.insert(i);
                n /= i;
            }
        }
    }
    int distinctPrimeFactors(vector<int>& nums) {
        set<int>st;
        for(int i : nums){
            prime(i,st);
        }
        return st.size();
    }
};