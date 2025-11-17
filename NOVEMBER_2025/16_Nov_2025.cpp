// 1513. Number of Substrings With Only 1s
#include<vector>
using namespace std;

class Solution {
    long long possibleStringCount(long long n) {
        return (n * (n + 1)) / 2;  
    }

public:
    int numSub(string s) {
        long long MOD = 1e9 + 7;

        long long cnt = 0;
        long long ans = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {     
                cnt++;
            } else {
                ans = (ans + possibleStringCount(cnt)) % MOD;
                cnt = 0;
            }
        }

        ans = (ans + possibleStringCount(cnt)) % MOD; 

        return (int)ans;
    }
};
