//1422. Maximum Score After Splitting a String
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxScore(string s) {
    int maxScore = 0;
    int zerosOnLeft = 0;
    int onesOnRight = count(s.begin(), s.end(), '1');

    for (int i = 0; i < s.length() - 1; ++i) {
        if (s[i] == '0') {
            zerosOnLeft++;
        } else {
            onesOnRight--;
        }

        maxScore = max(maxScore, zerosOnLeft + onesOnRight);
    }

    return maxScore;
    }
};

int main()
{
    Solution s1;
    string s = "011101";
    cout<<s1.maxScore(s);
    return 0;
}