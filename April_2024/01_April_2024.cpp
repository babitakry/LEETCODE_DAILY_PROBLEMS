//58. Length of Last Word

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1;

        while(i>=0 && s[i]==' ')
          --i;
        int lastIndex=i;
        while(i>=0 && s[i]!=' ')
          --i;
        return lastIndex-i;    
    }
};

int main(){
    Solution s;
    string str = "   fly me   to   the moon  ";
    cout<<s.lengthOfLastWord(str);
    return 0;
}