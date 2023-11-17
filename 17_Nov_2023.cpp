// 1877. Minimize Maximum Pair Sum in Array
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int maxi=0;
        int n;
        int start=0,end=nums.size()-1;
        n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            sum=nums[start]+nums[end];
            maxi=max(sum,maxi);
            start++;
            end--;
        }
        return maxi;
    }
};

int main()
{
    Solution s;
    vector<int> nums{3,5,2,3};
    cout<<s.minPairSum(nums);

    return 0;
}