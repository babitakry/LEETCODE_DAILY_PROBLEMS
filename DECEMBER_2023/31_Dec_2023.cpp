//1624. Largest Substring Between Two Equal Characters

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int maxCount = -1;
        for (int i = 0; i < s.size(); i++) {
            int cnt = -1;
            int j = i + 1;
            while (j < s.size()) {
                if(s[i] == s[j]){
                   cnt = j-i-1;
                }
               j++;
            }
            maxCount = max(maxCount, cnt);
        }
        return maxCount;
    }
};

int main()
{
    Solution s;
    string str = "abcdefgha";
    cout<<s.maxLengthBetweenEqualCharacters(str);
    
    return 0;
}