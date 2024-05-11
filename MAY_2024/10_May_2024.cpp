// 786. K-th Smallest Prime Fraction

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        map<double, pair<int, int>> mp;
        for(int i=0; i<arr.size(); i++)
        {
            for(int j=i+1; j<arr.size(); j++)
            {
                double div = double(arr[i]) / double(arr[j]);
                mp[div] = {arr[i], arr[j]};
            }
        }
        int ind = 1;
        for(auto it : mp)
        {
            if(ind == k)
            {
                return {it.second.first, it.second.second};
            }
            ind++;
        }
        return {-1, -1};
    }
};