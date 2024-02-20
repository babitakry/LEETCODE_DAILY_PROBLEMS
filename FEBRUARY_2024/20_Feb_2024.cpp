//268. Missing Number

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
         int sum_original,sum=0,i,n,result;
         n=nums.size();
         sum_original=(n*(n+1))/2;
         for(i=0;i<nums.size();i++)
            sum=sum+nums[i];
         result=sum_original-sum;  
         return result;
           
    }
};

int main()
{
    Solution s;
    vector<int> nums{3,0,1};
    cout<<s.missingNumber(nums);
    return 0;
}