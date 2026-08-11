class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0,sum1=0;
        for(int i : nums){
            sum+=i;
            while(i>0) {int rem=i%10; sum1+=rem; i/=10;}
        }
        return abs(sum-sum1);
    }
};