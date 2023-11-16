//1980. Find Unique Binary String
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void possibleCombination(vector<string> &nums,vector<string> &ans,string ds)
    {
        if(nums[0].size()==ds.size())
        {
            ans.push_back(ds);
            return ;
        }
        ds.push_back('0');
        possibleCombination(nums,ans,ds);
        ds.pop_back();

        ds.push_back('1');
        possibleCombination(nums,ans,ds);
        ds.pop_back();
    }
    string findDifferentBinaryString(vector<string>& nums) {
        
        
    }
};

int main()
{
    Solution s;
    vector<string> nums={"01","10"};
    string ds="";
    vector<string> ans;
    s.possibleCombination(nums,ans,ds);
    for(auto it:ans)
    {
        bool check=false;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==it){
                check=true;
                break;
            }
        }
        if(check==false){
            cout<<it<<endl;
            break;
        }
    }
    
    
}
