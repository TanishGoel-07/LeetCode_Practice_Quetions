class Solution {
public: 
    int funx(int x){
        int sum=0;
        while(x>0){
            int rem=x%10;
            sum+=rem;
            x=x/10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int mini=INT_MAX;
        bool flag=false;
        for(int i=0;i<nums.size();i++){
            int sum=funx(nums[i]);
            if(sum==i){
                flag=true;
                mini=min(mini,i);
            }
        }
        if(flag==false) return -1;
        return mini;
    }
};