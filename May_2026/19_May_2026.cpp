// 2540. Minimum Common Value

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mpp;

        for(auto it:nums1){
            mpp[it]++;
        }

        for(int i = 0; i < nums2.size(); i++){
            if(mpp.find(nums2[i]) != mpp.end()){
                return nums2[i];
            }
        }
        return -1;
    }
};