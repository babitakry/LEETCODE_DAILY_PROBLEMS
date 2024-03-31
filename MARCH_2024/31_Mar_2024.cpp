//2444. Count Subarrays With Fixed Bounds

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int left = 0, right = 0;
        int minB = -1;
        int maxB = -1;
        int badB = -1; //leftBoundry
        long long ans = 0;
        for(right=0;right<nums.size();right++){
            
            if(nums[right] > maxK || nums[right]<minK){
                badB = right;
            }
            if(nums[right] == maxK)
               maxB = right;
            if(nums[right] == minK)
               minB = right;
            ans = ans + max((min(minB,maxB)-badB),0);
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums{1,3,5,2,7,5};
    int minK = 1;
    int maxK = 5;
    cout<<s.countSubarrays(nums,minK,maxK);

}