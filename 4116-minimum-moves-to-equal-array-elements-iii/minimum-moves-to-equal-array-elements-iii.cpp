class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long ans=0;
        int maxi=*max_element(nums.begin(),nums.end());
        for(int i : nums){
            ans+=(maxi-i);
        }
        return ans;
    }
};