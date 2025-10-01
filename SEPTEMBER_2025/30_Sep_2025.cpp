#include<vector>
using namespace std;

class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();

        while(n > 1){
            vector<int> newNums;
            for(int i = 1; i < n; i++){
                newNums.push_back((nums[i-1]+nums[i])%10);
            }
            nums = newNums;
            n = nums.size();
        }
        return nums[0];
    }
};