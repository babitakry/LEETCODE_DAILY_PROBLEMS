// 2785. Sort Vowels in a String
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string sortVowels(string s) {
    vector<int>v;
    for(int i=0;i<s.size();i++){
       if(s[i]=='A' || s[i]=='E'|| s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
          v.push_back(s[i]);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0,j=0;i<s.size();i++)
    {
        if(s[i]=='A' || s[i]=='E'|| s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            s[i]=v[j];
            j++;
        }
    }
      return s;      
    }
};
int main()
{
    string s = "lEetcOde";
    Solution s1;
    cout<<"Sort Vowels : "<<s1.sortVowels(s);
    
    
    return 0;
}