#include<vector>
using namespace std;

class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long> result(k, 0);

        for (int i = 0; i < n; i++) {
            long long product = 1;
            for (int j = i; j < n; j++) {
                product = (product * nums[j]) % k;
                result[product]++;
            }
        }

        return result;
    }
};