class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int x=0;
        for(int i : nums){
            if(i%2==0){
                x=x|i;
            }
        }
        return x;
    }
};