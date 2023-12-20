//2706. Buy Two Chocolates
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int min1 = INT_MAX;
        int min2 = INT_MAX;

        for (const int price : prices)
        if (price <= min1) {
            min2 = min1;
            min1 = price;
        } else if (price < min2) {
            min2 = price;
        }

        const int minCost = min1 + min2;
        return minCost > money ? money : money - minCost;

    }
};
int main()
{
    Solution s;
    vector<int> prices{1,2,2};
    int money = 3;
    cout<<s.buyChoco(prices,money);
    return 0;
}