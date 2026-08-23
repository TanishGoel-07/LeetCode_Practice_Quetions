class Solution {
public:
    int findComplement(int num) {
        string res="";
        while(num!=1){
            if(num%2==0) res+='0';
            else res+='1';
            num=num/2;
        }
        reverse(res.begin(),res.end());
        for(int i=0;i<res.size();i++){
            if(res[i]=='0') res[i]='1';
            else res[i]='0';
        }
        int pd=1;
        num=0;
        for(int i=res.size()-1;i>=0;i--){
            if(res[i]=='1') num+=pd;
            pd=pd*2;
        }
        return num;
    }
};