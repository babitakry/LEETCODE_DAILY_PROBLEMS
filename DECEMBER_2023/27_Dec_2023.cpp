//1578. Minimum Time to Make Rope Colorful
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        int ans = 0;
        for(int i=0;i<colors.size();){
            int j=i+1;
            int sum = neededTime[i];
            int maxi = neededTime[i];
            while(colors[i] == colors[j] && j<colors.size()){
                sum += neededTime[j];
                maxi = max(maxi,neededTime[j]);
                j++;
            }
            ans += (sum-maxi);
            i=j;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    string colors = "aabaa";
    vector<int> neededTime{1,2,3,4,1};
    cout<<s.minCost(colors,neededTime);
    return 0;
}