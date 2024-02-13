//2108. Find First Palindromic String in the Array

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            string reversed = words[i];
            reverse(reversed.begin(),reversed.end());
            if(reversed == words[i])
                 return words[i];
        }
        return "";
    }
};

int main()
{
    Solution s;
    vector<string> words{"abc","car","ada","racecar","cool"};
    string ans;
    ans = s.firstPalindrome(words);
    cout<<ans;
    return 0;
}