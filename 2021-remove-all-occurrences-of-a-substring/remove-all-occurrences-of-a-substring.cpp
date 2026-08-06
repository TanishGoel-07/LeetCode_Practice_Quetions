class Solution {
public:
    string removeOccurrences(string s, string part) {
        string res;
        int pts = part.size();
        char pte = part.back();
        for (char ch : s) {
            res.push_back(ch);

            if (ch == pte && res.size() >= pts) {
                if (res.substr(res.size() - pts) == part) {
                    res.erase(res.size() - pts);
                }
            }
        }
        return res;
    }
};