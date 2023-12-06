//1716. Calculate Money in Leetcode Bank
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalMoney(int n) {
        int sum1=0;
        int sum2=0;
        for(int i=0; i<n/7; i++){
          int num=7+i;
          sum1 += (num*(num+1))/2 - (i*(i+1))/2;
        }
        int remain=n%7;
        int i = n/7+1;
        while(remain--){
          
          sum2 = sum2 + i;
          i++;
        }

        return sum1+sum2;
    }
};

int main()
{
    Solution s;
    int n=50;
    cout<<s.totalMoney(n);
    return 0;
}