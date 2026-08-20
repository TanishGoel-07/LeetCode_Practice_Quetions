class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>nums1;
        vector<int>nums2;
        for(int i : nums){
            if(nums1.size()==0){
                nums1.push_back(i);
                continue;
            }
            if(nums2.size()==0){
                nums2.push_back(i);
                continue;
            }
            else{
                if(nums1[nums1.size()-1]>nums2[nums2.size()-1])
                    nums1.push_back(i);
                else
                    nums2.push_back(i);
            }
        }
        vector<int>res;
        for(int i : nums1){
            res.push_back(i);
        }
        for(int i : nums2){
            res.push_back(i);
        }
        return res;
    }
};