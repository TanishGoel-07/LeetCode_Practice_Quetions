class Solution {
public:
    bool canPartition(vector<int>& arr) {
        int sum=0;
        for(int i : arr){
            sum+=i;
        }
        if(sum%2!=0) return false;
        sum=sum/2;
        vector<vector<bool>>dp(arr.size(),vector<bool>(sum+1,0));
        for(int i=0;i<arr.size();i++){
            dp[i][0]=true;
        }
        if (arr[0]<=sum) dp[0][arr[0]]=true;
        for(int i=1;i<arr.size();i++){
            for(int target=1;target<=sum;target++){
                bool nottaken=dp[i-1][target];
                bool taken=false;
                if(target>=arr[i]) taken=dp[i-1][target-arr[i]];
                dp[i][target]=taken|nottaken;
            }
        }
        return dp[arr.size()-1][sum];
    }
};