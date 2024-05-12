//2373. Largest Local Values in a Matrix

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> result(grid.size() - 2, vector<int>(grid.size() - 2));

        for (int i = 0; i < result.size(); i++) {
            for (int j = 0; j < result.size(); j++) {
			
                int largest = INT_MIN;
                for (int row = i; row < i + 3; row++) {
                    for (int column = j; column < j + 3; column++) {
                        largest = max(largest, grid[row][column]);
                    }
                }
                result[i][j] = largest;
            }
        }
        return result;
    }
};