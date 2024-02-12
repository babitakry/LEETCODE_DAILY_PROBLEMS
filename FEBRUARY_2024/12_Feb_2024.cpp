//169. Majority Element

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int cnt=0;
        int el;
        for(int i=0;i<nums.size();i++)
        {
            if(cnt==0){
                cnt=1;
                el=nums[i];
            }
            else if(nums[i]==el){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==el){
                cnt1++;
            }
        }
        if(cnt1 > (nums.size()/2)){
            return el;
        }
        return -1; 
    }
    
};
int main()
{
    Solution s;
    vector<int> nums{3,2,3};
    cout<<s.majorityElement(nums);
    return 0;
}
//BRUTE FORCE
// int n= nums.size();
//         for(int i=0;i<n;i++){
//             int cnt=0;
//             for(int j=0;j<n;j++)
//             {
//                 if(nums[j]==nums[i])
//                   cnt++;
//             }
//             if(cnt>n/2)
//               return nums[i];
//         }
//         return -1;
