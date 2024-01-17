//1207. Unique Number of Occurrences

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mpp;

        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }

        unordered_set<int> uniqueOccurrences;

        // Iterate through the map
        for (auto it : mpp) {
            // If the occurrence count is already in the set, return false
            if (uniqueOccurrences.count(it.second) > 0) {
                return false;
            }

            // Add the occurrence count to the set
            uniqueOccurrences.insert(it.second);
        }

        // If all occurrences are unique, return true
        return true;
    
    }
};

int main()
{
    Solution s;
    vector<int> arr = {1,2,2,1,1,3};
    cout<<s.uniqueOccurrences(arr);
    return 0;
}