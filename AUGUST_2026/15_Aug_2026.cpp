//3702. Longest Subsequence With Non-Zero Bitwise XOR


#include <iostream>
using namespace std;


// Optimized Approach
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;

        int xorr = 0;
        for (int i = 0; i < n; i++) {
            xorr ^= nums[i];
        }

        if(xorr != 0)
            return n;
        
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0)
                return n - 1;
        }

        return 0;
    }
};


// Brute Force Approach
// Time Complexity: O(n²)
// Space Complexity: O(1)

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        
        for(int i = 0; i < n; i++){
            int xorr = 0;
            for(int j = i; j < n; j++){
                xorr ^= nums[j];
                if(xorr != 0){
                    int len = j - i + 1;
                    maxi = max(maxi, len);
                }
            }
        }
        return maxi;
    }
};