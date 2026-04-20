//2078. Two Furthest Houses With Different Colors

// O(n) time complexity
// O(1) space complexity
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int ans = 0;

        for(int i = 0; i < n; i++){
            if(colors[i] != colors[0]){
                ans = max(ans, i);
            }
            if(colors[i] != colors[n-1]){
                ans = max(ans, n-1-i);
            }
        }
        return ans;
    }
};

// O(n*n) time complexity
// O(1) space complexity

// class Solution {
// public:
//     int maxDistance(vector<int>& colors) {
//         int dist = 0;
//         int maxDist = 0;

//         for(int i = 0; i < colors.size(); i++){
//             for(int j = i+1; j < colors.size(); j++){
//                 if(colors[i] != colors[j]){
//                     dist = abs(i-j);
//                     maxDist = max(maxDist, dist);
//                 }
//             }
//         }
//         return maxDist;
//     }
// };