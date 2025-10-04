#include<vector>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drink = 0;
        int empty = 0;

        while (numBottles > 0) {
            drink += numBottles;           // drink all full bottles
            empty += numBottles;           // add to empty
            numBottles = empty / numExchange; // exchange empty bottles for full ones
            empty = empty % numExchange;      // leftover empty bottles
        }
        return drink;
    }
};
