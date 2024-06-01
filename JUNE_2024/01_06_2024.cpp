//3110. Score of a String

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        for(int i=1;i<s.size();i++){
            int diff = abs(s[i-1]-s[i]);
            sum += diff;
        }
        return sum;
    }
};