class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total=0;
        for (int i=0;i<nums.size();i++) {
            total+=nums[i];
        }
        int target=total-x;
        if (target<0) return -1;
        int l=0,r=0,sum=0;
        int cnt=-1;
        while(r<nums.size()){
            sum+=nums[r];
            while(l<=r && sum>target){
                sum-=nums[l];
                l++;
            }
            if(sum==target){
                cnt=max(cnt,r-l+1);
            }
            r++;
        }
        return cnt==-1?-1:nums.size()-cnt;
    }
};