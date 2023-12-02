//1611. Minimum One Bit Operations to Make Integers Zero
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumOneBitOperations(int n) {
        if (n == 0) {
            return 0;
        }

        int result = 0;
        while (n > 0) {
            result ^= n;  // Flip all bits
            n >>= 1;      // Right shift to the next bit
        }

        return result;
    }
};

int main()
{
    Solution s;
    int n = 6;
    int ans=s.minimumOneBitOperations(n);
    cout<<ans;
    return 0;
}
