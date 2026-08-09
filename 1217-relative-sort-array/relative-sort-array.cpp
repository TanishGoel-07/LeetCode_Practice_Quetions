class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        vector<int>res;
        for(int i : arr1){
            mp[i]++;
        }
        for(int i : arr2){
            while(mp[i]!=0){
                res.push_back(i);
                mp[i]--;
            }
            if(mp[i]==0){
                mp.erase(i);
            }
        }
        for(auto it : mp){
            while(it.second--) res.push_back(it.first);
        }
        return res;
    }
};