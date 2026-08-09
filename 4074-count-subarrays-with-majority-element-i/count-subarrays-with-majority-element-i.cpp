class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            map<int,int>mp;
            for(int j=i;j<nums.size();j++){
                mp[nums[j]]++;
                if(2*mp[target]>(j-i+1)) cnt++;
            }
        }
        return cnt;
    }
};