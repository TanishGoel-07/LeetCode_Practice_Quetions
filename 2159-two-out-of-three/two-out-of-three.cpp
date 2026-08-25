class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        map<int,int>mp,mp1,mp2;
        set<int>st;
        for(int i : nums1){
            mp[i]++;
        }
        for(int i: nums2){
            mp1[i]++;
        }
        for(int i: nums3){
            mp2[i]++;
        }
        for(int i: nums1){
            if(mp1[i]!=0 || mp2[i]!=0){
                st.insert(i);
            }
        }
        for(int i: nums2){
            if(mp[i]!=0 || mp2[i]!=0){
                st.insert(i);
            }
        }
        for(int i: nums3){
            if(mp[i]!=0 || mp1[i]!=0){
                st.insert(i);
            }
        }
        vector<int>res;
        for(int i : st){
            res.push_back(i);
        }
        return res;
    }
};