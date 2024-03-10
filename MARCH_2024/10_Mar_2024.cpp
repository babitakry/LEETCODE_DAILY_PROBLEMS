//349. Intersection of Two Arrays
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
        int n=nums1.size();
        int m=nums2.size();
        int i=0;
        int j=0;
        vector<int>ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i<n && j<m){
            if(nums1[i] < nums2[j]){
                i++;
            }
            else if(nums2[j] < nums1[i]){
                j++;
            }
            else{
                if(ans.empty()) 
                 ans.push_back(nums1[i]);
                else if( ans.back()!=nums1[i])
                 ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }  
        return ans;    
    }
};

int main()
{
    Solution s;
    vector<int> nums1{4,9,5};
    vector<int> nums2{9,4,9,8,4};
    vector<int> ans ;
    ans = s.intersection(nums1,nums2);

    for(auto it:ans)
      cout<<it<<" ";
    return 0;
}