#include<vector>
using namespace std;

class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1 = rec1[0], a1 = rec2[0];
        int y1 = rec1[1], b1 = rec2[1];

        int x2 = rec1[2], a2 = rec2[2];
        int y2 = rec1[3], b2 = rec2[3];

        int width = min(x2, a2) - max(x1, a1);
        int height = min(y2, b2) - max(y1, b1);

        return height > 0 && width > 0;
    }
};