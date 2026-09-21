class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>res;
        for(char ch : words[0]){
            bool flag=true;
            for(int i=1;i<words.size();i++){
                if (words[i].find(ch) == string::npos) {
                    flag=false;
                    break;
                }
            }
            if(flag){
                res.push_back(string(1,ch));
                for (int i = 1; i<words.size(); i++) { 
                    int pos=words[i].find(ch); 
                    words[i].erase(pos, 1); }
            }
        }
        return res;
    }
};