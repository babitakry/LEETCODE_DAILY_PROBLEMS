#include<iostream>
using namespace std;

/* 

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] < 0){
                    count++;
                }
            }
        }
        return count;
    }
};

*/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            int low = 0, high = m - 1;
            int firstNeg = m; // default if no negative found

            while (low <= high) {
                int mid = low + (high - low) / 2;

                if (grid[i][mid] < 0) {
                    firstNeg = mid;
                    high = mid - 1; // search left for first negative
                } else {
                    low = mid + 1;
                }
            }

            count += (m - firstNeg);
        }

        return count;
    }
};