// 3300. Minimum Element After Replacement With Digit Sum

class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;

        for(int i = 0; i < nums.size(); i++){
            int num = nums[i];
            int sum = 0;

            while(num){
                int digit = num % 10;
                sum += digit;
                num = num / 10;
            }
            nums[i] = sum; 
            cout<<nums[i]<<" ";
            ans = min(ans, nums[i]);
        }
        return ans;
    }
};