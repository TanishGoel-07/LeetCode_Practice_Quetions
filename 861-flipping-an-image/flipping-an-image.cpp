class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> res;
        for(int i=0;i<image.size();i++){
            vector<int>temp;
            for(int j=0;j<image[i].size();j++){
                temp.push_back(image[i][j]);
            }
            reverse(temp.begin(),temp.end());
            res.push_back(temp);
        }
        for(int i=0;i<res.size();i++){
            for(int j=0;j<res[i].size();j++){
                if(res[i][j]==1) res[i][j]=0;
                else res[i][j]=1;
            }
        }
        return res;
    }
};