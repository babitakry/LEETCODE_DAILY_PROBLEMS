//238. Product of Array Except Self

#include<bits/stdc++.h>
using namespace std;

class Solution {
    
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n);
        vector<int> prefixSum(n);
        vector<int> suffixSum(n);
        prefixSum[0] = nums[0];
        for(int i=1;i<n;i++){
            prefixSum[i] = prefixSum[i-1]*nums[i];
        }
        suffixSum[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffixSum[i] = nums[i]*suffixSum[i+1];
        }
        
        answer[0] = suffixSum[1];
        answer[n-1] = prefixSum[n-2];
        for(int i=1;i<n-1;i++){
            answer[i] = prefixSum[i-1]*suffixSum[i+1];
        }
        return answer;
    }
};

int main()
{
    Solution s;
    vector<int> nums{1,2,3,4};
    vector<int> answer;

    answer = s.productExceptSelf(nums);
    for(int i=0;i<nums.size();i++){
        cout<<answer[i]<<" ";
    }
    return 0;
}