//2958. Length of Longest Subarray With at Most K Frequency

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        int left = 0,right = 0, ans = 0;
        for(right = 0;right<nums.size();right++){
            hash[nums[right]]++;
            while(hash[nums[right]] > k){
                hash[nums[left]]--;
                left++;
            }
            ans = max(ans,right-left+1);
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums{1,2,3,1,2,3,1,2};
    int k = 2;

    cout<<s.maxSubarrayLength(nums,k);
    return 0;
}