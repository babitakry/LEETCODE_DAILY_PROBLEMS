// 3876. Construct Uniform Parity Array II
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int cntEven = 0;
        int cntOdd = 0;

        for (int i = 0; i < n; i++) {
            if (nums1[i] % 2 == 0) {
                cntEven++;
            } else {
                cntOdd++;
            }
        }

        if (cntEven == n || cntOdd == n) {
            return true;
        }

        int smallestOdd = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (nums1[i] % 2 != 0) {
                smallestOdd = min(smallestOdd, nums1[i]);
            }
        }
        for (int i = 0; i < n; i++) {
            if (nums1[i] % 2 == 0) {
                int nums2 = nums1[i] - smallestOdd;

                if (nums2 < 1) {
                    return false;
                }
            }
        }
        return true;
    }
};