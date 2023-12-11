//867. Transpose Matrix
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> transpose_matrix(n, vector<int>(m));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               transpose_matrix[j][i]=matrix[i][j];
            }
        }
        
        return transpose_matrix;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> matrix{{1,2,3},{4,5,6}};
    vector<vector<int>> ans;
    ans=s.transpose(matrix);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
           cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}