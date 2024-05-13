// 861. Score After Flipping Matrix

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        
        for (int i = 0; i < rows; i++) {
            if (grid[i][0] == 0) {
                for (int j = 0; j < cols; j++) {
                    grid[i][j] ^= 1; // toggle each element
                }
            }
        }
        
        
        for (int j = 1; j < cols; j++) {
            int countOnes = 0;
            for (int i = 0; i < rows; i++) {
                countOnes += grid[i][j];
            }
            if (countOnes < (rows-countOnes)) {
                for (int i = 0; i < rows; i++) {
                    grid[i][j] ^= 1;// toggle each element
                }
            }
        }

        int sum = 0;
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                sum = sum + (1 << (cols-1-j))*grid[i][j]; //pows(2,cols-1-j) = (1 << (cols-1-j))
            }
        }
        
        return sum;
    }
};
