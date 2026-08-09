class Solution {
public:
    int digitFrequencyScore(int n) {
        map<int,int>mp;
        set<int>st;
        int temp=n;
        while(temp>0){
            int rem=temp%10;
            mp[rem]++;
            st.insert(rem);
            temp/=10;
        }
        int sum=0;
        for(int i : st){
            sum=sum+(i*mp[i]);
        }
        return sum;
    }
};