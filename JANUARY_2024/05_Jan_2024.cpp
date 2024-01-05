//300. Longest Increasing Subsequence
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int recu(int index,int prevIndex,vector<int> &nums, vector<vector<int>> &dp){
        if(index == nums.size())
            return 0;
        //checking if the required function call is previously calculated or not . if calculated then no need of further next call.
        //use the value from dp array
        if(dp[index][prevIndex+1] != -1)
            return dp[index][prevIndex+1];
        // pick
        int pick = 0;
        if(prevIndex == -1 || nums[index] > nums[prevIndex]){
            pick = 1 + recu(index + 1, index,nums,dp);
        }
        int not_pick = recu(index + 1, prevIndex ,nums,dp);

        //store the calculated value in dp vector
        //also return it
        return dp[index][prevIndex+1] = max(pick,not_pick);
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>> dp(nums.size(),vector<int> (nums.size()+1,-1));
        int prevIndex = -1;
        int ans = recu(0,prevIndex,nums,dp);

        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums{10,9,2,5,3,7,101,18};
    cout<<s.lengthOfLIS(nums);
    return 0;
}