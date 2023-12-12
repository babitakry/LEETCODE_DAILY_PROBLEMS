//1464. Maximum Product of Two Elements in an Array
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) { 
        // find maximum
        int maxi = 0;
        for(int i = 0; i < nums.size(); i++){
            maxi = max(nums[i],maxi);
        }
        // find second maximum
        int maximum,second_max;
        if(nums[0]>nums[1]){
            maximum = nums[0];
            second_max = nums[1];
        }
        else{
            maximum = nums[1];
            second_max = nums[0];
        }
        for(int i = 2; i < nums.size(); i++){
            if(nums[i] > maximum){
                second_max = maximum;
                maximum = nums[i];
            }
            else{
                if(nums[i] > second_max){
                    second_max = nums[i];
                }
            }
        }
        int result = 0;
        result = (maxi - 1) * (second_max - 1);
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> nums{3,4,5,2};
    cout<<s.maxProduct(nums);
    return 0;
}