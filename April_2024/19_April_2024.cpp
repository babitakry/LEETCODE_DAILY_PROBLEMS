//438. Find All Anagrams in a String

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int left = 0,right = 0;
        vector<int> hash1(26,0);
        vector<int> hash2(26,0);

        vector<int> ans;

        for(int i=0;i<p.size();i++){
            hash1[p[i]-'a']++;
        }

        for(int right=0;right<s.size();right++){
            hash2[s[right]-'a']++;
            if(right - left + 1 == p.size()){
                int i;
                for(i=0;i<26;i++){
                    if(hash1[i] != hash2[i]){
                      break;
                    }
                }
                if(i==26)
                    ans.push_back(left);
                hash2[s[left]-'a']--;
                left++;
            }
           
        }
        return ans;
    }
};