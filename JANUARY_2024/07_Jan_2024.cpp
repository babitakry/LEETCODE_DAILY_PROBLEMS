// 446. Arithmetic Slices II - Subsequence

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        vector<unordered_map<long long, int>> dp(n);  // dp[i][diff] stores the count of subsequences ending at index i with difference diff

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                long long diff = (long long)nums[i] - nums[j];
                dp[i][diff] += 1;  // Count subsequences ending at index i with difference diff
                if (dp[j].count(diff)) {
                    // Add the count of subsequences ending at index j with difference diff to the total count
                    dp[i][diff] += dp[j][diff];
                    count += dp[j][diff];
                }
            }
        }

        return count;
    }
};

int main()
{
    Solution s;
    vector<int> nums{2,4,6,8,10};
    cout<<s.numberOfArithmeticSlices(nums);
    return 0;
}