class Solution {
public:
    int find(int i){
        if (i%2==0)
            return -1;
        int x=1;
        while ((i & x)!=0)
            x <<= 1;
        return i - (x >> 1);
    }
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>res;
        for(int i : nums){
            res.push_back(find(i));
        }
        return res;
    }
};