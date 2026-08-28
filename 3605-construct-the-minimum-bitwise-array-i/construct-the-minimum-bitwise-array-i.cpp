class Solution {
public:
    int find(int i){
        for(int x=1;x<=i;x++){
            if((x|(x+1))==i) return x;
        }
        return -1;
    }
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>res;
        for(int i : nums){
            res.push_back(find(i));
        }
        return res;
    }
};