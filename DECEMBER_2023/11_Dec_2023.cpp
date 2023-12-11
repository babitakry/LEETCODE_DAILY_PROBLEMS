//1287. Element Appearing More Than 25% In Sorted Array
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        vector<int> hash(arr[n-1]+1,0);

        for(int i=0;i<arr.size();i++){
            hash[arr[i]] = hash[arr[i]] + 1;
        }
        for(int i=0;i<hash.size();i++){
            if((hash[i]*100.0)/n > 25){
                return i;
            }
        }
        return 0;
    }
};

int main()
{
    Solution s;
    vector<int> arr{1,2,2,6,6,6,6,7,10};
    cout<<s.findSpecialInteger(arr);
    return 0;
}