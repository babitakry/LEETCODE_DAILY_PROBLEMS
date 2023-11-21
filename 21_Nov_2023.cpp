
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        const int MOD = 1e9 + 7;
        unordered_map<int, int> freq;
        int nicePairs = 0;

        for (int num : nums) {
            int revNum = reverseNum(num);
            int diff = num - revNum;
            nicePairs = (nicePairs + freq[diff]) % MOD;
            freq[diff]++;
        }

        return nicePairs;
    }

private:
    int reverseNum(int num) {
        int rev = 0;
        while (num > 0) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        return rev;
    }
};
