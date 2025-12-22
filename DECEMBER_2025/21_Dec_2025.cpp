// 955. Delete Columns to Make Sorted II

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int m = strs[0].size();

        int cnt = 0;
        vector<bool> alreadySorted(n - 1, false);

        for (int j = 0; j < m; j++) {
            bool deleted = false;
            for (int i = 1; i < n; i++) {
                if (!alreadySorted[i - 1] && strs[i - 1][j] > strs[i][j]) {
                    deleted = true;
                    cnt++;
                    break;
                }
            }
            if (deleted) {
                continue;
            }

            for (int i = 1; i < n; i++) {
                alreadySorted[i - 1] =
                    alreadySorted[i - 1] | strs[i - 1][j] < strs[i][j];
            }
        }
        return cnt;
    }
};