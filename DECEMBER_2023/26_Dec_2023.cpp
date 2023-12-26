//1155. Number of Dice Rolls With Target Sum

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        const int MOD = 1e9 + 7;
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));

        return solveMem(n, k, target, dp, MOD);
    }

    int solveMem(int dice, int faces, int target, vector<vector<int>>& dp, const int MOD) {
        // base cases
        if (target < 0)
            return 0;
        if (dice == 0 && target != 0)
            return 0;
        if (target == 0 && dice != 0)
            return 0;
        if (dice == 0 && target == 0)
            return 1;

        if (dp[dice][target] != -1)
            return dp[dice][target];

        int ans = 0;
        for (int i = 1; i <= faces; i++) {
            ans = (ans + solveMem(dice - 1, faces, target - i, dp, MOD)) % MOD;
        }
        return dp[dice][target] = ans;
    }
};

int main()
{
    Solution s;
    int n = 30, k = 30, target = 500;
    cout<<s.numRollsToTarget(n,k,target);
    return 0;
}