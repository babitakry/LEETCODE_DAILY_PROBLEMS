//1897. Redistribute Characters to Make All Strings Equal

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        
        unordered_map<char,int> mpp;

        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                mpp[words[i][j]]++;
            }
        }
        int firstCount = mpp.begin()->second;  // Get count of the first character

        for(auto it = mpp.begin(); it != mpp.end(); ++it){
            if(it->second % words.size() != 0){
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    vector<string> words{"abc","aabc","bc"};
    bool ans = s.makeEqual(words);
    if(ans == 0)
      cout<<"false";
    else
      cout<<"true";
    return 0;
}