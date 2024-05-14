//1219. Path with Maximum Gold

#include<bits/stdc++.h>
using namespace std;

class Solution {
    int recursive(int i, int j, vector<vector<int>>& grid) {
        vector<int> dRow{-1, 0, 1, 0};
        vector<int> dCol{0, 1, 0, -1};

        int temp = grid[i][j];
        grid[i][j] = 0; // mark as visited

        int maxi = 0;

        for (int r = 0; r < 4; r++) {
            int nRow = dRow[r] + i;
            int nCol = dCol[r] + j;

            if (nRow >= 0 && nRow < grid.size() &&
                nCol >= 0 && nCol < grid[0].size() &&
                grid[nRow][nCol] != 0) {
                maxi = max(maxi, recursive(nRow, nCol, grid));
            }
        }
        grid[i][j] = temp; // unmark
        return temp + maxi;
    }

public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int maxGold = 0;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] != 0) { // start only from non-zero cells
                    maxGold = max(maxGold, recursive(i, j, grid));
                }
            }
        }

        return maxGold;
    }
};
