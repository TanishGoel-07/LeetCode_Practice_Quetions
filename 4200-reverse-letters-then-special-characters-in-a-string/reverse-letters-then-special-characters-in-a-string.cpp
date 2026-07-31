class Solution {
public:
    string reverseByType(string s) {
        int r=s.size()-1,l=0;
        while(l<r){
    if (s[l] == '!' || s[l] == '@' || s[l] == '#' || s[l] == '$' ||
        s[l] == '%' || s[l] == '^' || s[l] == '&' || s[l] == '*' ||
        s[l] == '(' || s[l] == ')') {

        if (s[r] == '!' || s[r] == '@' || s[r] == '#' || s[r] == '$' ||
            s[r] == '%' || s[r] == '^' || s[r] == '&' || s[r] == '*' ||
            s[r] == '(' || s[r] == ')')
        {
            swap(s[l],s[r]);
            l++,r--;
        }
        else{
            r--;
        }
    }
    else l++;
}
    r=s.size()-1,l=0;
    while(l<r){
    if (s[l] != '!' && s[l] != '@' && s[l] != '#' && s[l] != '$' &&
        s[l] != '%' && s[l] != '^' && s[l] != '&' && s[l] != '*' &&
        s[l] != '(' && s[l] != ')') {

        if (s[r] != '!' && s[r] != '@' && s[r] != '#' && s[r] != '$' &&
            s[r] != '%' && s[r] != '^' && s[r] != '&' && s[r] != '*' &&
            s[r] != '(' && s[r] != ')')
        {
            swap(s[l],s[r]);
            l++,r--;
        }
        else{
            r--;
        }
    }
    else l++;
}
return s;
    }
};