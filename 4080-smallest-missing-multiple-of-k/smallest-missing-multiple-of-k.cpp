class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>st;
        for(int i : nums){
            st.insert(i);
        }
        int i=1;
        while(1){
            if(st.count(k*i)==0) {
                return k*i;
            }
            i++;
        }
        return 0;
    }
};