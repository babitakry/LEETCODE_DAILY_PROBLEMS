//1662. Check If Two String Arrays are Equivalent
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="",s2="";
        for(int i=0;i<word1.size();i++)
        {
            s1=s1+word1[i];
        }
        for(int j=0;j<word2.size();j++)
        {
            s2=s2+word2[j];
        }
        return s1==s2;
    }
};
int main()
{
    Solution s;
    vector<string> word1 = {"ab", "c"};
    vector<string> word2 = {"a", "bc"};
    bool ans=s.arrayStringsAreEqual(word1,word2);
    cout<<ans;
    return 0;
}