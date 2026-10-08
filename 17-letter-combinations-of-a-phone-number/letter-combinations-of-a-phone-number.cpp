class Solution {
public:
    vector<string>ans;
    map<char,string>mp={
        {'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}
    };
    void funx(string temp,string &digits,int ind){
        if(ind==digits.size()){
            ans.push_back(temp);
            return;
        }
        for(char x : mp[digits[ind]]){
            temp+=x;
            funx(temp,digits,ind+1);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        string temp="";
        funx(temp,digits,0);
        return ans;
    }
};