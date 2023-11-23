// 2614. Prime In Diagonal
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}


    int diagonalPrime(vector<vector<int>>& nums) {
        int maxi=0;
        bool ans=false;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                if(i==j || i+j==nums.size()-1){
                  ans=isPrime(nums[i][j]);
                  if(ans)
                    maxi=max(nums[i][j],maxi);
                }
            }
        }
        return maxi;
    }
};

int main()
{
    vector<vector<int>>nums{{1,2,3},{5,6,7},{9,10,11}};
   
    Solution s;
    cout<<s.diagonalPrime(nums);
    return 0;
}