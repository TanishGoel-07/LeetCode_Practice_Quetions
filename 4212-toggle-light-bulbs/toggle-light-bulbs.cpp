class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int>res;
        set<int>st;
        for(int i : bulbs){
            if(st.count(i)>0){
                st.erase(i);
            }
            else{
                st.insert(i);
            }
        }
        for(int i : st){
            res.push_back(i);
        }
        return res;
    }
};