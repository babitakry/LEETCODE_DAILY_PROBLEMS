//1496. Path Crossing
#include<bits/stdc++.h>
using namespace std;

class Solution {
    struct pair_hash {
        template <class T1, class T2>
            size_t operator () (const pair<T1, T2>& p) const {
            auto h1 = hash<T1>{}(p.first);
            auto h2 = hash<T2>{}(p.second);
            return h1 ^ h2;
        }
    };
public:
    bool isPathCrossing(string path) {
        pair<int, int> ans;
        unordered_map<pair<int, int>, int, pair_hash> mpp;

        mpp[ans]++; // Start point
        for (int i = 0; i < path.size(); i++) {
            if (path[i] == 'E')
                ans.first++;
            else if (path[i] == 'W')
                ans.first--;
            else if (path[i] == 'N')
                ans.second++;
            else
                ans.second--;

            if (mpp[ans] >= 1)
                return true;

            mpp[ans]++;
        }
        return false;
    }
};

int main()
{
    Solution s;
    string path = "NESWW";
    cout<<s.isPathCrossing(path);
    return 0;
}