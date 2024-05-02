//2441. Largest Positive Integer That Exists With Its Negative
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int maxi = -1;
        unordered_map<int,int> mpp;

        for(int i=0;i<nums.size();i++){
            if(nums[i] < 0){
                mpp[nums[i]]++;
            }
        }

        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0){
                if(mpp.find(-nums[i]) != mpp.end()){
                    int ans = nums[i];
                    maxi = max(maxi,ans);
                }
            }
        }
        return maxi;
    }
};