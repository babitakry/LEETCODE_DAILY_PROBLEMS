//1750. Minimum Length of String After Deleting Similar Ends

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j && s[i] == s[j]) {
            char ch = s[i];
            while (i <= j && s[i] == ch)
                i++;
            while (j >= i && s[j] == ch)
                j--;
        }

        return j - i + 1;
    }
};

int main()
{
    Solution s;
    string s1 = "aabccabba";
    cout<<s.minimumLength(s1);
    return 0;
}