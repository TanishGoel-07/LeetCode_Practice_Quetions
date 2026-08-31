class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        vector<vector<int>>res;
        int n=nums.size();
        for(int i=0;i<pow(2,n);i++){
            vector<int>temp;
            for(int j=0;j<n;j++){
                if(i&(1<<j))
                    temp.push_back(nums[j]);
            }
            res.push_back(temp);
        }
        int maxi=0;
        int cnt=0;
        for(int i=0;i<res.size();i++){
            int x=0;
            for(int j=0;j<res[i].size();j++){
                x|=res[i][j];
            }
            if(maxi<x){
                cnt=1;
                maxi=x;
            }
            else if(maxi==x){
                cnt+=1;
            }
        }
        return cnt;
    }
};