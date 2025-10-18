#include<vector>
using namespace std;

class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        int prev = INT_MIN;
        int cnt = 0;

        for(int i = 0; i < n; i++){
            int minVal= nums[i] - k;
            if(prev < minVal){
                prev = nums[i] - k;
                cnt++;
            }
            else if(prev < nums[i]+k){
                prev = prev+1;
                cnt++;
            }
        }
        return cnt;
    }
};