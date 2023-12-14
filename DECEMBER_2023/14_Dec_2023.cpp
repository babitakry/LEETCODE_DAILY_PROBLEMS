//2482. Difference Between Ones and Zeros in Row and Column
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int RowSize=grid.size();
        int ColSize=grid[0].size();

        vector<int> OnesRow(RowSize,0),OnesCol(ColSize,0);
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j] == 1){
                   OnesRow[i]++;
                   OnesCol[j]++;
                }
            }
        }
        vector<vector<int>> ans(RowSize);
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
               int row1 = OnesRow[i];
               int row0 = RowSize - row1;
               int col1 = OnesCol[j];
               int col0 = ColSize - col1;

               int diff = row1 + col1 - row0 - col0;
               ans[i].push_back(diff);
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> grid{{0,1,1},{1,0,1},{0,0,1}};
    vector<vector<int>> ans(grid.size());
    ans = s.onesMinusZeros(grid);
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[i].size();j++){
            cout<<ans[i][j]<<"  ";
        }
        cout<<"\n";
    }
    return 0;
}