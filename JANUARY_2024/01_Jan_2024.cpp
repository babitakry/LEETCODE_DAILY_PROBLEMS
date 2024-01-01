//455. Assign Cookies
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int cnt = 0;
        int j=0;

        for(int i=0;i<g.size();){
            if(j == s.size())
              break;
            if(j<s.size() && s[j] >= g[i]){
                cnt++;
                i++;
                j++;
            }
            else j++;

        }
        return cnt;
    }
};

int main()
{
    Solution obj;
    vector<int>g{1,2,3};
    vector<int>s{1,1};
    cout<<obj.findContentChildren(g,s);
    return 0;
}

