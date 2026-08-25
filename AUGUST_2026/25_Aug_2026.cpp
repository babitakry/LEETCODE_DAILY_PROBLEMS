// 3718. Smallest Missing Multiple of K

#include <iostream>
using namespace std;

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        
        unordered_map<int, int> mpp;
        for(int i = 0; i < n; i++){
            mpp[nums[i]]++;
        }

        for(int i = 1; i <= n+1; i++){
            int smallest = k*i;
            if(mpp.find(smallest) == mpp.end()){
                return smallest;
            }
        }

        return -1;
    }
};