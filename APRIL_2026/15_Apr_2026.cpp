// 2515. Shortest Distance to Target String in a Circular Array

class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int ans = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (words[i] == target) {
                int forwardDist = abs(i - startIndex);
                int backwardDist = abs(n - forwardDist);
                int dist = min(forwardDist, backwardDist);
                ans = min(ans, dist);
            }
        }

        return (ans == INT_MAX) ? -1 : ans;
    }
};