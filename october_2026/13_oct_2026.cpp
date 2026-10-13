// 3727. Maximum Alternating Sum of Squares

#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        
        for(int i = 0; i < n; i++){
            nums[i] = nums[i]*nums[i];
        }

        sort(nums.begin(), nums.end());

        long long left = 0;
        for(int i = 0; i < n/2; i++){
            left -= nums[i];
        }

        long long right = 0;
        for(int i = n/2; i < n; i++){
            right += nums[i];
        }
        return left + right;
    }
};