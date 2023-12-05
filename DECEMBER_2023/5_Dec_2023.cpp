// 1688. Count of Matches in Tournament
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfMatches(int n) {
        // int matches=0,advTeam=0;
        // int total_match=0;
        // while(n!=1)
        // {
        //     if(n%2 == 0)
        //     {
        //        matches=n/2;
        //        advTeam=n/2;
        //        total_match += matches;
        //        n=advTeam;
        //     }
        //     else
        //     {
        //         matches=(n-1)/2;
        //         advTeam=(n-1)/2 + 1;
        //         total_match += matches;
        //         n=advTeam;  
        //     }
        // }
        // return total_match;

        if(n==1)
          return 0;
        if(n%2 == 0)
           return n/2+numberOfMatches(n/2);
        else
           return (n-1)/2 + numberOfMatches((n-1)/2 + 1);
    }       
};

int main()
{
    Solution s;
    int n=14;
    cout<<s.numberOfMatches(n);
    return 0;
}