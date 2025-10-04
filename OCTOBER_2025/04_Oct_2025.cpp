#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0, i, j, area;
        int l = 0, r = height.size() - 1;
        while (l < r) {
            area = min(height[l], height[r]) * (r - l);
            if (area > max)
                max = area;
            if (min(height[l], height[r]) == height[l])
                l++;
            else
                r--;
        }

        return max;
    }
};