class Solution {
public:
    int sum(vector<int>& nums,int l,int r){
        int prev=nums[l];
        int prev2=0;
        for(int i=l+1;i<=r;i++){
            int take=prev2+nums[i];
            int nottake=prev;
            int curr=max(take,nottake);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        return max(sum(nums,0,nums.size()-2),sum(nums,1,nums.size()-1));
    }
};