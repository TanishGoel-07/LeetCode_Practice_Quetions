class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        int cnt=0;
        while(l<r){
            while (l < r && nums[l] != 0) l++;
            while (l < r && nums[r] == 0) r--;
            if(nums[l]==0 && nums[r]!=0){
                    swap(nums[l],nums[r]);
                    cnt++;
                    r--;
            }
        }
        return cnt;
    }
};