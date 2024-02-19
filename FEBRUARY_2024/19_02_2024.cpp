//231. Power of Two

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
         return true;
        if(n%2!=0 || n==0)
          return false;
        return isPowerOfTwo(n/2);
    }
};

int main()
{
    Solution  s;
    int n = 3;
    bool ans;
    ans = s.isPowerOfTwo(n);
    cout<<ans;
    return 0;
}