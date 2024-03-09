//3005. Count Elements With Maximum Frequency

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> hash;
        int sum = 0;
        int maxi = 0;
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
            maxi = max(maxi,hash[nums[i]]);
        }

        
        for (auto it : hash) {
            if (it.second == maxi) {
               
                sum += it.second; // Update sum with the current maximum frequency
            }
        }

        return sum;
    }
};