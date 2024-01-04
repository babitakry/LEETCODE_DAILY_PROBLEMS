//2870. Minimum Number of Operations to Make Array Empty
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
           mpp[nums[i]]++;
        }
        int cnt = 0;
        for(auto it : mpp){
            if(it.second == 1)
               return -1;
            if(it.second % 3 == 0)
               cnt = cnt + it.second/3;
            else if(it.second % 3 == 1 || it.second %3 == 2)
               cnt = cnt + it.second/3 + 1;
        }
        return cnt ;
    }
};

int main()
{
    Solution s;
    vector<int> nums{2,3,3,2,2,4,2,3,4};
    cout<<s.minOperations(nums);
    return 0;
}