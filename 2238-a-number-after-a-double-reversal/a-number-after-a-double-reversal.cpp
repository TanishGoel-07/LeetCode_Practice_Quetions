class Solution {
public:
    bool isSameAfterReversals(int num) {
        string s=to_string(num);
        if(s=="0") return true;
        string a=s;
        reverse(s.begin(),s.end());
        int i = 0;  
        while(i < s.size() && s[i] == '0')
            i++;
            s.erase(0, i);
        
        reverse(s.begin(),s.end());
        return s==a;
    }
};