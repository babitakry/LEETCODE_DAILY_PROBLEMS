//3903. Smallest Stable Index I


#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        int ans_index = -1;
        for(int i = 0; i < n; i++){
            
            int maxi = INT_MIN;
            for(int j = 0; j <= i; j++){
                maxi = max(maxi, nums[j]);
            }

            int mini = INT_MAX;
            for(int j = i; j < n; j++){
                mini = min(mini, nums[j]);
            }

            int score = maxi-mini;
            int ans = INT_MAX;
            
            if(score <= k){
                return i;
            }
        }

        return -1;
    }
};