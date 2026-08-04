class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxi=0;
        int mini=INT_MAX;
        for(int i : nums){
            if(maxi<i) maxi=i;
            if(mini>i) mini=i;
        }
        set<int>st;
        vector<int>res;
        for(int i : nums){
            st.insert(i);
        }
        for(int i=mini;i<=maxi;i++){
            if(!st.contains(i)) res.push_back(i);
        }
        return res;
    }
};