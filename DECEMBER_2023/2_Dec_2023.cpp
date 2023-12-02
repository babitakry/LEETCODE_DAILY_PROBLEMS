// 1160. Find Words That Can Be Formed by Characters
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> hash(26,0);
        for(int i=0;i<chars.size();i++){
            hash[chars[i]-'a']++;
        }
        int ans=0;
        for(int i=0;i<words.size();i++){
            vector<int> temp=hash;
            bool check=true;
            for(int j=0;j<words[i].size();j++){
                if(temp[words[i][j]-'a']<=0){
                    check=false;
                    break;
                }
                else{
                    temp[words[i][j]-'a']--;
                }
            }
            if(check == true)
              ans = ans + words[i].size();
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<string> words={"cat","bt","hat","tree"};
    string chars = "atach";
    cout<<s.countCharacters(words,chars);
    return 0;
}