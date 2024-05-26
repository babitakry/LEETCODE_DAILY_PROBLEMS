//552. Student Attendance Record II

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mod=1e9+7;
    vector<vector<vector<int>>> t;
    int solve(int n,int cnta,int cntl){
        if(cnta==2 || cntl==3) return 0;
        if(n==0) return 1;

        if(t[n][cnta][cntl]!=-1) return t[n][cnta][cntl];
        long long int ans=0;
        ans=solve(n-1,cnta+1,0);        //absent reset late cnt to 0 as consecutive late matters
        ans+=solve(n-1,cnta,cntl+1);    //late
        ans+=solve(n-1,cnta,0);         //present

        return t[n][cnta][cntl]=(ans)%mod;
    }
    int checkRecord(int n) {
        // t.resize(n,-1);
        t = vector<vector<vector<int>>>(n + 1, vector<vector<int>>(2, vector<int>(3, -1)));
        return solve(n,0,0);
    }
};