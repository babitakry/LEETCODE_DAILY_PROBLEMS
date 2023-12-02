// 1727. Largest Submatrix With Rearrangements

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int result=0;

        // Calculate consecutive ones for each position in each column
        for(int j=0;j<col;j++){
            for(int i=1;i<row;i++){
                if(matrix[i][j]==1){
                    matrix[i][j]=matrix[i][j]+matrix[i-1][j];
                }
            }
        }

        // Find the largest submatrix by sorting and calculating area 
        for(int i=0;i<row;i++){
            sort(matrix[i].begin(),matrix[i].end(),greater<int>());
            for(int j=0;j<col;j++){
                result=max(result,matrix[i][j]*(j+1));
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<vector<int>>matrix{{0,0,1},{1,1,1},{1,0,1}};
    cout<<s.largestSubmatrix(matrix);
    return 0;
}