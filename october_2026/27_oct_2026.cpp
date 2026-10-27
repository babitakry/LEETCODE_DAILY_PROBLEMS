// 3963. Create Grid With Exactly One Path

#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans(m, string(n, '#'));
        int i = 0, j = 0;

        while (j < n) {
            ans[i][j] = '.';
            j++;
        }

        i = 1;
        j = n - 1;

        while (i < m) {
            ans[i][j] = '.';
            i++;
        }

        return ans;
    }
};