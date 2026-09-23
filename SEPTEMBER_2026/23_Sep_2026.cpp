#include<vector>
using namespace std;


class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int totalSum = 0;

        for(int i = 0; i < n; i++) {
            totalSum += nums[i];
        }

        int req = totalSum - x;

        if(req < 0) 
            return -1;

        int left = 0;
        int sum = 0;
        int length = -1;

        for(int right = 0; right < n; right++) {
            sum += nums[right];

            while(sum > req) {
                sum -= nums[left];
                left++;
            }

            if(sum == req) {
                length = max(length, right - left + 1);
            }
        }

        if(length == -1) 
           return -1;

        return n - length;
    }
};