//442. Find All Duplicates in an Array

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mpp;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        for(auto &it:mpp){
            if(it.second == 2){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums{4,3,2,7,8,2,3,1};
    vector<int> ans;

    ans = s.findDuplicates(nums);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}