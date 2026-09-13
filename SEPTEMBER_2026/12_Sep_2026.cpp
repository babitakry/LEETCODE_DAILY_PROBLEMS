#include<iostream>
#include<vector>
using namespace std;

class Solution {
    struct Node {
        long long score = -1;
        vector<int> idxs;
    };

    int findNextIdx(vector<vector<int>> &intervals, int endPoint){
        int n = intervals.size();
        int low = 0;
        int high = n-1;

        int result = n;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(intervals[mid][0] > endPoint){
                result = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return result;
    }

    Node solve(vector<vector<int>> &intervals, vector<int> &nextIdx, int i, int k, vector<vector<Node>> &dp){
        int n = intervals.size();
        if(k == 0 || i >= n){
            return Node();
        }

        if(dp[i][k].score != -1){
            return dp[i][k];
        }

        Node skip = solve(intervals, nextIdx, i+1, k, dp);
        Node temp = solve(intervals, nextIdx, nextIdx[i], k-1, dp);
        
        int wt = intervals[i][2];
        int idx = intervals[i][3];
        Node take;
        take.score = wt + temp.score;
        take.idxs = temp.idxs;
        take.idxs.push_back(idx);
        sort(begin(take.idxs), end(take.idxs));

        Node result;
        if (skip.score > take.score) {
            result = skip;
        } else if (skip.score < take.score) {
            result = take;
        } else {
            result = (skip.idxs < take.idxs) ? skip : take;
        }

        return dp[i][k] = result;
    }
public:
    vector<int> maximumWeight(vector<vector<int>>& intervals) {
        int n = intervals.size();

        for (int i = 0; i < n; i++)
            intervals[i].push_back(i);
        
        sort(intervals.begin(), intervals.end());

        vector<int> nextIdx(n);
        for(int i = 0; i < n; i++){
            int endPoint = intervals[i][1];
            nextIdx[i] = findNextIdx(intervals, endPoint);
        }

        for(int i = 0; i < n; i++){
            cout<<nextIdx[i]<<" ";
        }

        int K = 4; //Return the lexicographically smallest array of at most 4 indices from intervals with maximum score, representing your choice of non-overlapping intervals.

        vector<vector<Node>> dp(n + 1, vector<Node>(K + 1));
        return solve(intervals,nextIdx, 0, K, dp).idxs;
    }
};