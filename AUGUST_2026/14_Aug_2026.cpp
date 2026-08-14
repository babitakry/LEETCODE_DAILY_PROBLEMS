// 3090. Maximum Length Substring With Two Occurrences

#include <iostream>
using namespace std;

// ----------------------------------------------------------
// Optimized Approach (Sliding Window)
// Time Complexity: O(n)
// Space Complexity: O(1)
// ----------------------------------------------------------

class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int maxi = 0;
        int l = 0, r = 0;

        unordered_map<char, int> mpp;

        while (r < n) {
            mpp[s[r]]++;

            while (mpp[s[r]] > 2) {
                mpp[s[l]]--;

                if (mpp[s[l]] == 0) {
                    mpp.erase(s[l]);
                }

                l++;
            }

            int len = r - l + 1;
            maxi = max(maxi, len);

            r++;
        }

        return maxi;
    }
};

// ----------------------------------------------------------
// Brute Force Approach
// Time Complexity: O(n²)
// Space Complexity: O(1)
// ----------------------------------------------------------

class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int maxi = 0;

        for (int i = 0; i < n; i++) {
            unordered_map<char, int> mpp;

            for (int j = i; j < n; j++) {
                mpp[s[j]]++;

                if (mpp[s[j]] > 2) {
                    break;
                }

                maxi = max(maxi, j - i + 1);
            }
        }

        return maxi;
    }
};

// ----------------------------------------------------------
// My Approach
// Time Complexity: O(n³)
// Space Complexity: O(n)
// ----------------------------------------------------------

class Solution {
public:
    int maximumLengthSubstring(string s) {
        int maxi = INT_MIN;

        for (int i = 0; i < s.size(); i++) {
            for (int j = i; j < s.size(); j++) {
                int len = j - i + 1;

                string sub = s.substr(i, len);

                unordered_map<char, int> mpp;

                for (int k = 0; k < len; k++) {
                    mpp[sub[k]]++;
                }

                bool valid = true;

                for (auto it : mpp) {
                    if (it.second > 2) {
                        valid = false;
                        break;
                    }
                }

                if (valid) {
                    maxi = max(maxi, len);
                }
            }
        }

        return maxi;
    }
};