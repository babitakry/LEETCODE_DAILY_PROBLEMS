// 1424. Diagonal Traverse II

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int m=nums.size();
        int maxi=nums[0].size();
        for(int i=0;i<nums.size();i++){
            if(nums[i].size()>maxi)
              maxi=nums[i].size();
        }
        
        vector<vector<int>>v(m+maxi);
        vector<int>ans;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
               v[i+j].push_back(nums[i][j]);
            }
        }
        for(int i=0;i<v.size();i++)
        {
            reverse(v[i].begin(),v[i].end());
            for(int j=0;j<v[i].size();j++)
            {
                ans.push_back(v[i][j]);
            }
        }
       return ans;
    }
};
int main()
{
    Solution s;
    vector<vector<int>>nums{{1,2,3},{4,5,6},{7,8,9}};
    vector<int>ans;
    ans=s.findDiagonalOrder(nums);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
   

    return 0;
}
