class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string s : words){
            string m=s;
            reverse(s.begin(),s.end());
            if(s==m) return s;
        }
        return "";
    }
};