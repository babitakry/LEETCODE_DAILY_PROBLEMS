// 1464. Maximum Product of Two Elements in an Array

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        int ans = INT_MIN;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i != j){
                    int prod = (nums[i] - 1) * (nums[j] - 1);
                    ans = max(ans, prod);
                }
            }
        }
        return ans;
    }
};