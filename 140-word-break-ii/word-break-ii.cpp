class Solution {
public:
    vector<string>ans;
    void helper(int i,string &s,vector<string>&temp,unordered_set<string>&st){
        if(i==s.size()){
            string str="";
            for(auto x : temp) str+=x+' ';
            str.pop_back();
            ans.push_back(str);
            return;
        }
        string word="";
        for(int ind=i;ind<s.size();ind++){
            word+=s[ind];
            if(st.find(word)!=st.end()){
                temp.push_back(word);
                helper(ind+1,s,temp,st);
                temp.pop_back();
            }
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>st;
        for(string str : wordDict){
            st.insert(str);
        }
        vector<string>temp;
        helper(0,s,temp,st);
        return ans;
    }
};