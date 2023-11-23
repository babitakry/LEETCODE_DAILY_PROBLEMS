//1630. Arithmetic Subarrays
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>&temp)
    {
        sort(temp.begin(),temp.end());
        int diff=temp[1]-temp[0];
        for(int i=2;i<temp.size();i++)
        {
            if(temp[i]-temp[i-1] != diff)
               return false;
            
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        for(int i=0;i<l.size();i++)
        {
            vector<int>temp;
            for(int j=l[i];j<=r[i];j++)
            {
                temp.push_back(nums[j]);
            }
            if(check(temp))
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<bool> ans;
    vector<int>nums{4,6,5,9,3,7};
    vector<int>l{0,0,2};
    vector<int>r{2,3,5};
    ans=s.checkArithmeticSubarrays(nums,l,r);
    for(int i=0;i<ans.size();i++)
       cout<<ans[i]<<" ";
    return 0;
}