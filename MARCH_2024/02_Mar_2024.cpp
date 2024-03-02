//977. Squares of a Sorted Array

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();

        vector<int> arr(n);
        for(int i=0;i<nums.size();i++){
            nums[i] = nums[i]*nums[i];
        }
        int left = 0;
        int right = n-1;
        for(int i=n-1;i>=0;i--){
             if(nums[left] > nums[right]){
                 arr[i] = nums[left];
                 left++;
             }
             else{
                 arr[i] = nums[right];
                 right--;
             }
        }
        
        return arr;
    }
};

int main()
{
    Solution s;
    vector<int> nums{-4,-1,0,3,10};
    vector<int> ans(nums.size());
    ans = s.sortedSquares(nums);
    for(int i=0;i<nums.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}