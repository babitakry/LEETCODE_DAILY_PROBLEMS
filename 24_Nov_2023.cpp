//1561. Maximum Number of Coins You Can Get
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int i=0;
        int j=piles.size()-2;
        int ans=0;
        while(i<j){
           ans=ans+piles[j];
           j=j-2;
           i++;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int>piles{2,4,1,2,7,8};
    cout<<s.maxCoins(piles);

    return 0;
}