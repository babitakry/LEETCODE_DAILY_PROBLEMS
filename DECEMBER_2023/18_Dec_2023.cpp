//1913. Maximum Product Difference Between Two Pairs

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int productofcd = nums[n-1]*nums[n-2];
        int productofab = nums[0]*nums[1];

        return (productofcd - productofab);

    }
};

int main()
{
    Solution s;
    vector<int> nums{4,2,5,9,7,4,8};
    cout<<s.maxProductDifference(nums);
    return 0;
}