//
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>>v(m+n);
        vector<int>ans;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
               v[i+j].push_back(mat[i][j]);
            }
        }
        for(int i=0;i<v.size();i++)
        {
            if(i%2==0){
               reverse(v[i].begin(),v[i].end());
            }
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