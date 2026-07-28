class Solution {
public:
    string convertDateToBinary(string date) {
        string temp=date.substr(0,4);
        string nemp=date.substr(5,2);
        string hemp=date.substr(8,2);
        int n=stoi(temp);
        int m=stoi(nemp);
        int k=stoi(hemp);
        string res="";
        while(n>0){
            if(n%2==0) res+='0';
            else res+='1';
            n=n/2;
        }
        reverse(res.begin(),res.end());
        res+=date[4];
        string res1="";
        while(m>0){
            if(m%2==0) res1+='0';
            else res1+='1';
            m=m/2;
        }
        reverse(res1.begin(),res1.end());
        res1+=date[7];
        string res2="";
        while(k>0){
            if(k%2==0) res2+='0';
            else res2+='1';
            k=k/2;
        }
        reverse(res2.begin(),res2.end());
        return res+res1+res2;
    }
};