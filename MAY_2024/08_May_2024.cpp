//506. Relative Ranks

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> result(score.size());
        unordered_map<int, int> scoreMap;
        

        for (int i = 0; i < score.size(); ++i) {
            scoreMap[score[i]] = i;
        }

        sort(score.begin(), score.end(), greater<int>());
        
        for (int i = 0; i < score.size(); ++i) {
            int originalIndex = scoreMap[score[i]];
            if (i == 0) {
                result[originalIndex] = "Gold Medal";
            } else if (i == 1) {
                result[originalIndex] = "Silver Medal";
            } else if (i == 2) {
                result[originalIndex] = "Bronze Medal";
            } else {
                result[originalIndex] = to_string(i + 1);
            }
        }
        
        return result;
    }
};