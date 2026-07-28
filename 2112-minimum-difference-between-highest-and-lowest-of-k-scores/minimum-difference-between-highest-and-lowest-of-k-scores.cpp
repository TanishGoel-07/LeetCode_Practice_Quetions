class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k==1) return 0;
        int mini=INT_MAX,l=0,r=k-1;
        sort(nums.begin(),nums.end());
        while(r<nums.size()){
            mini=min(mini,(nums[r]-nums[l]));
            r++;
            l++;
        }
        return mini;
    }
};