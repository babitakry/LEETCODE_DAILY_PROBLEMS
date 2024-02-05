//387. First Unique Character in a String

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mpp;
        
        for (int i = 0; i < s.length(); i++) {
            mpp[s[i]]++;
        }

        for (int i = 0; i < s.length(); i++) {
            if (mpp[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    Solution s;
    string s1 = "leetcode";
    cout<<s.firstUniqChar(s1);
    return 0;
}