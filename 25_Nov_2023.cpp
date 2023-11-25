// 1685. Sum of Absolute Differences in a Sorted Array
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
    int n=nums.size();
    vector<int> prefixSum(n, 0);
    vector<int> suffixSum(n,0);

    prefixSum[0] = nums[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + nums[i];
    }
    
    suffixSum[n - 1] = nums[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suffixSum[i] = suffixSum[i + 1] + nums[i];
    }

    vector<int> ans;
    for(int i=0;i<n;i++){
        int temp=(nums[i]*i - prefixSum[i]) + (suffixSum[i]-nums[i] *(n-i-1));
        ans.push_back(temp);
    }
    return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums{1,4,6,8,10};
    vector<int> ans;
    ans=s.getSumAbsoluteDifferences(nums);
    for(int i=0;i<nums.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}