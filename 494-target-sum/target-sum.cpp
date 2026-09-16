class Solution {
public:
    int countways(vector<int>&nums,int target,int i,int x){
        if(i==nums.size()) return x==target;
        int plus1 =countways(nums,target,i+1,x+nums[i]);
        int minus1=countways(nums,target,i+1,x-nums[i]);
        return plus1+minus1;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return countways(nums,target,0,0);
    }
};