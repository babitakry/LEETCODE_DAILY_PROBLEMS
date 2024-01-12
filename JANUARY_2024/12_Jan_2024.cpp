//1704. Determine if String Halves Are Alike

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        int count_1 = 0;
        int count_2 = 0;
        int half = s.size()/2;
        for(int i=0;i<half;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' ||s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                count_1 = count_1 + 1;
        }

        for(int j=half;j<s.size();j++){
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' ||s[j]=='u' || s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U')
                count_2 = count_2 + 1;
        }

        if(count_1 == count_2)
            return true;
        return false;
    }
};

int main()
{
    Solution s;
    string s1 = "textbook";
    cout<<s.halvesAreAlike(s1);
    return 0;
}