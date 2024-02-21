//201. Bitwise AND of Numbers Range

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int cnt = 0;
        while (left != right) {
            left >>= 1;
            right >>= 1;
            cnt++;
        }
        return (left << cnt);
    }
};

int main()
{
    Solution s;
    int left = 5, right = 7;
    cout<<s.rangeBitwiseAnd(left,right);
    
    return 0;
}