class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        int op1=0,op2=0,op3=INT_MAX;
        int r=0,l=0;
        int cnt=0;
        while(r<nums.size()){
            if(nums[r]==maxi || nums[r]==mini) cnt++;
            op1++;
            r++;
            if(cnt==2) break;
        }
        cnt=0,r=nums.size()-1;
        while(r>=0){
            if(nums[r]==maxi || nums[r]==mini) cnt++;
            op2++;
            r--;
            if(cnt==2) break;
        }
        r=nums.size()-1;
        int minIdx = -1, maxIdx = -1;
        for (int i = 0; i <nums.size(); i++) {
            if (nums[i] == mini) minIdx = i;
            if (nums[i] == maxi) maxIdx = i;
        }
        int way1 = (minIdx + 1) + (nums.size() - maxIdx);
        int way2 = (maxIdx + 1) + (nums.size() - minIdx);
        op3 = min(way1, way2);
        int x=min(op1,op2);
        x=min(x,op3);
        return x;
    }
};