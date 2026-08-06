class Solution {
public:
    int smallestNumber(int n, int t) {
        set<int>st;
        while(!st.contains(n)){
            st.insert(n);
            int digp=1;
            int temp=n;
            while(n>0){
                int rem=n%10;
                digp=digp*rem;
                n=n/10;
            }
            if(digp%t==0) return temp;
            n=temp+1;
        }
        return 0;
    }
};