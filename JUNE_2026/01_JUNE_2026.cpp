// 2144. Minimum Cost of Buying Candies With Discount

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();

        if (n == 1)
            return cost[0];

        sort(cost.begin(), cost.end());

        int ans = 0;

        for (int i = n - 1; i >= 0; i -= 3) {
            ans += cost[i];
            if (i - 1 >= 0)
                ans += cost[i - 1];
        }

        return ans;
    }
};