//2000. Reverse Prefix of Word

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        reverse(word.begin(),word.begin()+word.find(ch)+1);
        return word;
    }
};

