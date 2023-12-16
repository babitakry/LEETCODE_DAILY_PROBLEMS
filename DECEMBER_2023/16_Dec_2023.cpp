//242. Valid Anagram
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> hash(26);
        
        if(s.size() != t.size())
            return false;

        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
        }

        for(int i=0;i<t.size();i++){
            if(hash[t[i]-'a'] == 0){
                 return false;
            }
            hash[t[i]-'a']--;
        }
        return true;
    }
};

int main()
{
    Solution s;
    string s1 = "anagram", t = "nagaram";
    cout<<s.isAnagram(s1,t);
    return 0;
}