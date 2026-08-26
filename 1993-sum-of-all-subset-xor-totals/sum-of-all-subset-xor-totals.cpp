class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>>res;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<pow(2,n);i++){
            vector<int>temp;
            for(int j=0;j<n;j++){
                if(i&(1<<j))
                    temp.push_back(nums[j]);
            }
            res.push_back(temp);
        }
        for(int i=0;i<res.size();i++){
            int x=0;
            for(int j=0;j<res[i].size();j++){
                x^=res[i][j];
            }
            sum+=x;
        }
        return sum;
    }
};