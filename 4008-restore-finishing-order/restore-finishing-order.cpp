class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        set<int>st;
        for(int i : friends){
            st.insert(i);
        }
        vector<int>res;
        for(int i : order){
            if(st.count(i)){
                res.push_back(i);
            }
        }
        return res;
    }
};