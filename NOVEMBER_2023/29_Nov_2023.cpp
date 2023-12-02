// 191. Number of 1 Bits
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;
        while(n){
            cnt += n & 1;
            n >>= 1;
        }
        return cnt;
    }
};

int main()
{
    Solution s;
    uint32_t n = 0b11111111111111111111111111111101u;
    int ans=s.hammingWeight(n);
    cout<<ans;
    return 0;
}