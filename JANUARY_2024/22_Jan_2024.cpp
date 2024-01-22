// 645. Set Mismatch

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> hash(nums.size()+1,0);

        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        int first,second;

        for(int i=1;i<hash.size();i++){
            if(hash[i]>1)
            {
                first=i;
            }
            else if( hash[i]==0)
                second=i;
        }
        return {first,second};
    }
};

int main()
{
    Solution s;
    vector<int> nums{1,2,2,4};
    vector<int> ans;
    ans = s.findErrorNums(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}