// 3644. Maximum K to Sort a Permutation


#include <vector>     // vector
using namespace std;

class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int n = nums.size();

        int temp = -1;
        for(int i = 0; i < n; i++){
            if(nums[i] != i){
                temp = temp & nums[i];
            }
        }

        if(temp == -1)
            return 0;
        
        return temp;
    }
};