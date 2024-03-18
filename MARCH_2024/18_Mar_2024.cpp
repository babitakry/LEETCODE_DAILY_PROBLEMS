//452. Minimum Number of Arrows to Burst Balloons

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int ans = 1;
        int end = points[0][1];
        for(int i=1;i<points.size();i++){
            if(end < points[i][0]){
                ans++;
                end = points[i][1];
            }
            else{
                end = min(end,points[i][1]);
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> points{{10,16},{2,8},{1,6},{7,12}};
    cout<<s.findMinArrowShots(points);
    return 0;
}