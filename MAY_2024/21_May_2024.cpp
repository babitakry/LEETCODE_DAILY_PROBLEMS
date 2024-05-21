//78. Subsets

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int numofSubsets = 1<<n; // 2^n = 1 << n
        vector<vector<int>> ans;

        for(int num = 0;num < numofSubsets;num++){
            vector<int> list;
            for(int i=0;i<n;i++){
                if(num & (1<<i)){
                    list.push_back(nums[i]);
                }
            }
            ans.push_back(list);
        }
        return ans;
    }
};
// class Solution {
// public:
//     void printF(int ind,vector<int>&ds,vector<int>&nums,int n,vector<vector<int>>&ans){
//         if(ind==n)
//         {
//             ans.push_back(ds);
//             return ;
//         }
        
//         //take or pick the particular index into the subsequence.
//         ds.push_back(nums[ind]);
//         printF(ind+1,ds,nums,n,ans);
//         ds.pop_back();

//     //not pick or not take condition,this element is not added to your subsequences.
//         printF(ind+1,ds,nums,n,ans);
//     }
//     vector<vector<int>> subsets(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> ds;
//         vector<vector<int>>ans;
//         printF(0,ds,nums,n,ans);
        
//         return ans;
//     }
// };



