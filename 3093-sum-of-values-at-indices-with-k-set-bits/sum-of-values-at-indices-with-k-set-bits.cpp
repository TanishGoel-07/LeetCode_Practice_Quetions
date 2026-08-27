class Solution {
public:
    bool countset(int x,int &k){
        int i=0;
        int cnt=0;
        while(x!=0){
            if((x&(1<<i))!=0) cnt++;
            x>>=1;
        }
        return cnt==k;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(countset(i,k)==true) cnt+=nums[i];
        }
        return cnt;
    }
};