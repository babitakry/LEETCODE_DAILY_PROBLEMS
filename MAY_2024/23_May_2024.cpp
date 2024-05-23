//2597. The Number of Beautiful Subsets

#include<bits/stdc++.h>
using namespace std;

class Solution {
    
    int f(int ind,int k,vector<int> &temp,vector<int> &nums){
        int n = nums.size();
        if(ind == n)
           return 1;
        int pick = 0;
        int notPick = 0;

        if(find(temp.begin(),temp.end(),nums[ind]-k)==temp.end() && 
           find(temp.begin(),temp.end(),nums[ind]+k)==temp.end()){
            temp.push_back(nums[ind]);
            pick = f(ind+1,k,temp,nums);
            temp.pop_back();
        }
        notPick = f(ind+1,k,temp,nums);
        return pick + notPick;
    }
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        vector<int> temp;
        return f(0,k,temp,nums) - 1;
    }
};