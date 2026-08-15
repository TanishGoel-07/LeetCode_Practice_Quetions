class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x=0;
        int n=nums.size();
        for(int i :  nums){
            x^=i;
        }
        if(x!=0) return n;
        for(int i : nums){
            if(i!=0) return n-1;
        }
        return 0;
    }
};