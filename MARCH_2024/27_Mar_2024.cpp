//713. Subarray Product Less Than K
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left = 0, right = 0, product = 1, count = 0;
        int n = nums.size();

        if(k <= 1) 
          return 0;
        while (right < n) {
            product *= nums[right];
            while (product >= k) 
              product /= nums[left++];
            count += 1 + (right - left);
            right++;
        }
        return count;
    }
};

int main(){
    Solution s;
    vector<int> nums{10,5,2,6};
    int k = 100;
    cout<<s.numSubarrayProductLessThanK(nums,k);
    return 0;
}