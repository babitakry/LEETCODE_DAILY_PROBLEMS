//1863. Sum of All Subset XOR Totals

#include<bits/stdc++.h>
using namespace std;

class Solution {
    int possibleSubsets(vector<int> &nums,int index,int currentXorr){
        if(index == nums.size())
            return currentXorr;
        
        int pick = possibleSubsets(nums,index+1,currentXorr ^ nums[index]);
        int notPick = possibleSubsets(nums,index+1,currentXorr);
        return pick + notPick;
    }
public:
    int subsetXORSum(vector<int>& nums) { 
        return possibleSubsets(nums,0,0);
    }
};