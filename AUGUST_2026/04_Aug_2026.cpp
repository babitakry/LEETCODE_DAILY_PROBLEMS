// 3731. Find Missing Elements

#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int maxi = INT_MIN;
        int mini = INT_MAX;

        for(int i = 0; i < nums.size(); i++){
            maxi = max(maxi, nums[i]);
            mini = min(mini, nums[i]);
            mpp[nums[i]]++;
        }

        vector<int> ans;
        for(int i = mini; i <= maxi; i++){
            if(mpp.find(i) == mpp.end()){
                ans.push_back(i);
            }
        }

        return ans;
    }
};