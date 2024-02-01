//2966. Divide Array Into Arrays With Max Difference

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
      
        int n = nums.size(); 
        vector<vector<int>> result;
        
        for(int i=0;i<nums.size();i=i+3){
            if(nums[i+1]-nums[i] > k || nums[i+2]-nums[i+1] > k || nums[i+2]-nums[i] > k)
                return {};
            else{
                result.push_back({nums[i],nums[i+1],nums[i+2]});
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> nums{1,3,4,8,7,9,3,5,1};
    int k = 2;
    vector<vector<int>> ans;
    ans = s.divideArray(nums,k);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}