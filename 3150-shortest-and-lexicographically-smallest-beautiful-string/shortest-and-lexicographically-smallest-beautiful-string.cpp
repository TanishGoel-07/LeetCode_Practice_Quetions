class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int r=0,l=0;
        int minlen=INT_MAX;
        int cnt=0;
        string ans="";
        while(r<s.size()){
            if(s[r]=='1') cnt++;
            while(cnt>k){
                if(s[l]=='1') cnt--;
                l++;
            }
            if(cnt==k){
                while(s[l]=='0') l++;
                if(r-l+1<minlen){
                    minlen=r-l+1;
                    ans=s.substr(l,minlen);
                }
                else if(r-l+1==minlen){
                    string temp= s.substr(l,minlen);
                    if(temp<ans){
                        ans=temp;
                    }
                }
            }
            r++;
        }
        return ans;
    }
};