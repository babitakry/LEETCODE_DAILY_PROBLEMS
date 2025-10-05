#include <vector>
using namespace std;

class Solution {
    void dfs(int i, int j, const vector<vector<int>>& heights, 
             vector<vector<bool>>& visited, const vector<vector<int>>& dirs, 
             int m, int n) {

        visited[i][j] = true;

        for (auto& d : dirs) {
            int x = i + d[0], y = j + d[1];
            if (x < 0 || x >= m || y < 0 || y >= n) 
               continue;
            if (visited[x][y]) 
               continue;
            if (heights[x][y] < heights[i][j]) 
               continue;

            dfs(x, y, heights, visited, dirs, m, n);
        }
    }
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m = heights.size(); 
        int n = heights[0].size();

        vector<vector<bool>> pac(m, vector<bool>(n, false));
        vector<vector<bool>> atl(m, vector<bool>(n, false));

        vector<vector<int>> dirs = {{1,0}, {-1,0}, {0,1}, {0,-1}};

        // Pacific — top row & left column
        for (int j = 0; j < n; ++j)
            dfs(0, j, heights, pac, dirs, m, n);
        for (int i = 0; i < m; ++i)
            dfs(i, 0, heights, pac, dirs, m, n);

        // Atlantic — bottom row & right column
        for (int j = 0; j < n; ++j)
            dfs(m - 1, j, heights, atl, dirs, m, n);
        for (int i = 0; i < m; ++i)
            dfs(i, n - 1, heights, atl, dirs, m, n);

        vector<vector<int>> res;
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                if (pac[i][j] && atl[i][j])
                    res.push_back({i, j});

        return res;
    }    
};
