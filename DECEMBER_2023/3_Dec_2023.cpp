//1266. Minimum Time Visiting All Points
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int maxi=0;
        int sum = 0;
        for(int i=0;i<points.size()-1;i++)
        {
            maxi=max(abs(points[i+1][0]-points[i][0]),abs(points[i+1][1]-points[i][1]));
            sum += maxi;
        }
        return sum;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> points{{1,1},{3,4},{-1,0}};
    cout<<s.minTimeToVisitAllPoints(points);
    return 0;
}