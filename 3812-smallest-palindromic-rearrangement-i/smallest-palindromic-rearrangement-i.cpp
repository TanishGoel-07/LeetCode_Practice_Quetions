class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        if(n==1) return s;
        string first=s.substr(0,n/2);
        sort(first.begin(),first.end());
        string last=first;
        reverse(last.begin(),last.end());
        if(n%2==0) return first+last;
        return first+s[n/2]+last;
    }
};