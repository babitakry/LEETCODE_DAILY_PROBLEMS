// 2574. Left and Right Sum Differences

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int sum = accumulate(nums.begin(), nums.end(), 0);

        int leftSum = 0;
        
        for(int i = 0; i < n; i++){
            ans.push_back(leftSum);
            leftSum += nums[i];
        }
        

        int rightSum = 0;
        int preSum = 0;
        for(int i = 0; i < n; i++){
            preSum += nums[i];
            rightSum = sum - preSum;
            ans[i] = (abs(ans[i] - rightSum));
        }

        return ans;
    }
};