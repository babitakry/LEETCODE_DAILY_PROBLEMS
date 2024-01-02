//2610. Convert an Array Into a 2D Array With Conditions

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {

    unordered_map<int,int> mpp;
    int maxi = 0;
    for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
        maxi = max(maxi,mpp[nums[i]]);
    }
    
    vector<vector<int>> V(maxi);
    for(auto it:mpp){
        for(int i=0;i<it.second;i++){
            V[i].push_back(it.first);
        }
    }
    return V;
  }
};

int main()
{
    Solution s;
    vector<int> nums{1,3,4,1,2,3,1};
    unordered_map<int,int> mpp;
    int maxi = 0;
    for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
        maxi = max(maxi,mpp[nums[i]]);
    }
    vector<vector<int>> matrix(maxi);
    matrix = s.findMatrix(nums);

    for(int i=0;i<maxi;i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}