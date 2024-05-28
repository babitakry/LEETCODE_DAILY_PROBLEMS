//1208. Get Equal Substrings Within Budget

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.size();
        int start = 0, end = 0, currCost = 0, maxLength = 0;
        
        while (end < n) {
            currCost += abs(s[end] - t[end]);
            
            while (currCost > maxCost) {
                currCost -= abs(s[start] - t[start]);
                start++;
            }
            
            maxLength = max(maxLength, end - start + 1);
            end++;
        }
        
        return maxLength;
    }
};