// 3741. Minimum Distance Between Three Equal Elements II

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> mpp;
        int result = INT_MAX;

        for (int k = 0; k < nums.size(); k++) {
            mpp[nums[k]].push_back(k);

            if (mpp[nums[k]].size() >= 3) {
                vector<int> &v = mpp[nums[k]];
                int n = v.size();
                int i = v[n - 3];
                result = min(result, 2 * (k - i));
            }
        }

        return result == INT_MAX ? -1 : result;
    }
};