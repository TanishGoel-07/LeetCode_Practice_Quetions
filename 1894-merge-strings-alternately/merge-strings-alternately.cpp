class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int x=0,r=0;
        string res="";
        while(x<word1.size() && r<word2.size()){
            res+=word1[x];
            res+=word2[r];
            x++;
            r++;
        }
        while(x<word1.size()){
            res+=word1[x];
            x++;
        }
        while(r<word2.size()){
            res+=word2[r];
            r++;
        }
        return res;
    }
};