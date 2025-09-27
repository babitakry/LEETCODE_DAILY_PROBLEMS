#include <vector>
using namespace std;

class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        vector<long long> preSum(n);
        preSum[0] = nums[0];
        for(int i = 1; i < n; i++) {
            preSum[i] = preSum[i-1] + nums[i];
        }

        for(int j = n - 1; j >= 2; j--) {
            if(preSum[j-1] > nums[j]) {
                return preSum[j]; // largest valid perimeter
            }
        }
        return -1;
    }
};
