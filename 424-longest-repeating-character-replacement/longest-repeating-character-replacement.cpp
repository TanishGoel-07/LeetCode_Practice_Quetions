class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxlen=0;
        int maxf=0;
        int mp[26]={0};
        int l=0,r=0;
        while(r<s.size()){
            mp[s[r]-'A']++;
            maxf=max(maxf,mp[s[r]-'A']);
            while((r-l+1)-maxf>k){
                mp[s[l]-'A']--;
                maxf=0;
                for(int i=0;i<25;i++){
                    maxf=max(maxf,mp[i]);
                }
                l++;
            }
            if((r-l+1)-maxf<=k) maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};