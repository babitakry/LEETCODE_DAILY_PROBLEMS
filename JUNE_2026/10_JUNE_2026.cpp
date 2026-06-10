// 3691. Maximum Total Subarray Value II

class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n = nums.size();

        if (n == 1) 
            return 0;

        vector<int> diff;

        for (int i = 0; i < n; i++) {
            int maxi = nums[i];
            int mini = nums[i];

            for (int j = i + 1; j < n; j++) {
                maxi = max(maxi, nums[j]);
                mini = min(mini, nums[j]);

                diff.push_back(maxi - mini);
            }
        }

        sort(diff.begin(), diff.end());

        k = min(k, (int)diff.size());

        long long ans = 0;

        while (k--) {
            ans += diff.back();
            diff.pop_back();
        }

        return ans;
    }
};