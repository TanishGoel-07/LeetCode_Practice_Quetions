class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int>res;
        int odd=0;
        int even=0;
        int i=0;
        while(n!=0){
            int temp=n%2;
            if(temp==1 && i%2==0) even++;
            else if(temp==1 && i%2!=0) odd++;
            n=n/2;
            i++;
        }
        res.push_back(even);
        res.push_back(odd);
        return res;
    }
};