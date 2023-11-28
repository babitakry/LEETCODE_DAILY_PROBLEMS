#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfWays(string corridor) {
       int cnt=0;
       for(int i=0;i<corridor.size();i++){
          if(corridor[i]=='S')
             cnt++;
        }
        if(cnt==0 || cnt%2) return 0;

        int c=0;
        long long ans=1;
        for(int i=0;i<corridor.size();i++)
        {
            if(corridor[i]=='S') c++;
            if(c==2)
            {
                int cnt=1;
                i++;
                while(i<corridor.size() && corridor[i]=='P')
                  cnt++,i++;
                if(i==corridor.size()) break;
                ans=(ans*cnt)%1000000007;
                c=0;
                i--;
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    string corridor = "SSPPSPS";
    cout<<s.numberOfWays(corridor);

    return 0;
}