//1347. Minimum Number of Steps to Make Two Strings Anagram

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> hash1;
        unordered_map<char,int> hash2;

        for(int i=0;i<s.size();i++){
            hash1[s[i]]++;
            hash2[t[i]]++;
        }
        int ans = 0;
        for(auto it:hash2){
            if(it.second > hash1[it.first]){
               ans += it.second-hash1[it.first];
            }
        }
        return ans;
    }
};

int main()
{
    Solution s1;
    string s = "leetcode", t = "practice";
    cout<<s1.minSteps(s,t);
    return 0;
}