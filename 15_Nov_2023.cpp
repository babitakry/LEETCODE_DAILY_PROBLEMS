// 1846. Maximum Element After Decreasing and Rearranging

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int maxi=1;
        arr[0]=1;
        
        for(int i=1;i<arr.size();i++)
        {
            if(abs(arr[i]-arr[i-1])>1)
            {
                arr[i]=arr[i-1]+1;
            }
            maxi=max(maxi,arr[i]);
        }
        return maxi;
    }
};
int main()
{
    Solution s;
    vector<int>arr{2,2,1,2,1};
    int maxi;
    maxi=s.maximumElementAfterDecrementingAndRearranging(arr);
    cout<<"Maximum element = "<<maxi;

    return 0;
}
