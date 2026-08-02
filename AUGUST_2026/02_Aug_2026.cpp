// 877. Stone Game

#include<iostream>
#include <numeric>
using namespace std;

class Solution {
    int solve(vector<int> &piles, vector<vector<int>> &dp, int i, int j){
        if(i > j)
            return 0;
        
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        
        int take_i = piles[i] + min(solve(piles, dp, i+2, j), solve(piles, dp, i+1, j-1));
        int take_j = piles[j] + min(solve(piles, dp, i+1, j-1), solve(piles, dp, i, j-2));

        return dp[i][j] = max(take_i, take_j);
    }
public:
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        int sum = accumulate(begin(piles), end(piles), 0);

        vector<vector<int>> dp(n, vector<int>(n, -1));
        int AliceScore = solve(piles,dp, 0, n-1);
        int BobScore = sum - AliceScore;
        
        return AliceScore > BobScore;
    }
};