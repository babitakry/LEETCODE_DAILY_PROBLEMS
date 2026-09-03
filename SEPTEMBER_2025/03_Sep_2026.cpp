// 3876. Construct Uniform Parity Array II
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

// My approach
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


// //Approach (Mathematical observation)
//T.C : O(n)
//S.C : O(1)
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minEl = *min_element(begin(nums1), end(nums1));

        if(minEl % 2 == 1) { //odd - then we can convert all even to odd
            return true; //all nums2 will be odd
        }

        //check if we can make all even in nums2
        for(int &num : nums1) {
            if(num % 2 == 1) {
                return false;
            }
        }

        return true; //all nums2 will be even
    }
};