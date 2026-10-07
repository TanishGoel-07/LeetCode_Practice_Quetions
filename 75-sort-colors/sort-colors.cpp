class Solution {
public:
    void sortColors(vector<int>& arr) {
        int z=0,t=arr.size()-1,i=0;
        while(i<=t){
            if(arr[i]==2) swap(arr[i],arr[t--]);
            else if(arr[i]==0) {swap(arr[i],arr[z]); i++,z++;}
            else i++;
        }
    }
};