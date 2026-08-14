class Solution {
public:
    int maximumLengthSubstring(string s) {
        int maxi=INT_MIN;
        int l=0,r=0;
        map<char,int>mp;
        
        while(r<s.size()){
            mp[s[r]]++;
            while(mp[s[r]]>2){
                mp[s[l]]--;
                if(mp[s[l]]==0) mp.erase(s[l]);
                l++;
            }
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};