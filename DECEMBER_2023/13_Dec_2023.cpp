//1582. Special Positions in a Binary Matrix
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool CheckRow(int i,vector<vector<int>>&mat)
    {
        int cnt = 0;
        for(int j=0;j<mat[i].size();j++){
            if(mat[i][j] == 1)
                cnt++;
        }
        return cnt == 1;
    }
    bool CheckColumn(int j,vector<vector<int>>&mat)
    {
        int cnt = 0;
        for(int i=0;i<mat.size();i++)
        {
            if(mat[i][j] == 1)
               cnt++;
        }
        return cnt == 1;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int cnt = 0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1 && (CheckRow(i,mat)==true) && (CheckColumn(j,mat)==true))
                    cnt ++;
            }
        }
        return cnt;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> mat{{1,0,0},{0,1,0},{0,0,1}};
    cout<<s.numSpecial(mat);
    
    return 0;
}