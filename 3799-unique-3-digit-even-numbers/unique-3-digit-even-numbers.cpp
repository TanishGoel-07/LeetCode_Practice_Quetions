class Solution {
public:
    set<int>st;
    void f(vector<int>& digits,string s,vector<int>&vis){
        if(s.size()==3){
            int n=stoi(s);
            if(n%2==0) st.insert(n);
            return;
        }
        for(int i=0;i<digits.size();i++){
            if(vis[i]) continue;
            if(s.empty() && digits[i]==0) continue;
            vis[i]=1;
            s.push_back('0' + digits[i]);
            f(digits,s,vis);
            s.pop_back();
            vis[i]=0;
        }
    }
    int totalNumbers(vector<int>& digits) {
        string s;
        vector<int>vis(digits.size(),0);
        f(digits,s,vis);
        return st.size();
    }
};