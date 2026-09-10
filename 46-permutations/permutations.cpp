class Solution {
public:
    vector<vector<int>>ans;
    void f(vector<int>ds,map<int,int>mp,vector<int>&nums){
        if(ds.size()==nums.size()) {ans.push_back(ds); return;}
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==0){
                mp[nums[i]]=1;
                ds.push_back(nums[i]);
                f(ds,mp,nums);
                ds.pop_back();
                mp[nums[i]]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ds;
        map<int,int>mp;
        f(ds,mp,nums);
        return ans;
    }
};