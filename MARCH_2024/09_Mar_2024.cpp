//2540. Minimum Common Value
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int common = INT_MAX;
        int i=0,j=0;

        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] == nums2[j]){
                common = nums1[i];
                break;
            }
            else if(nums1[i] < nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return common != INT_MAX ? common : -1;
    }
};

int main()
{
    Solution s;
    vector<int> nums1{1,2,3,6};
    vector<int> nums2{2,3,4,5};

    cout<<s.getCommon(nums1,nums2);
    return 0;
}