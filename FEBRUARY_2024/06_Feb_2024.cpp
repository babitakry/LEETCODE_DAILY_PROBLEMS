//49. Group Anagrams

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        string word;
        for(auto x:strs){
            word=x;
            sort(word.begin(),word.end());
            mp[word].push_back(x);
         } 
         vector<vector<string>> ans;
         for(auto x:mp){
             ans.push_back(x.second);
         }
         return ans;
    }
};

int main()
{
    Solution s;
    vector<string> strs={"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> ans;
    ans = s.groupAnagrams(strs);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}