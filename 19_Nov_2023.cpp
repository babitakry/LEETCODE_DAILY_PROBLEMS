// 1887. Reduction Operations to Make the Array Elements Equal
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reductionOperations(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int last=nums.size()-1;
       int cnt=0;

       for(int i=last-1;i>=0;i--)
       {
           if(nums[i]!=nums[i+1])
           {
               cnt+=last-i;
           }
       }
       return cnt;
    }
};
int main()
{
   Solution s;
   vector<int> nums{1,1,2,2,3};
   
   cout<<s.reductionOperations(nums);

}