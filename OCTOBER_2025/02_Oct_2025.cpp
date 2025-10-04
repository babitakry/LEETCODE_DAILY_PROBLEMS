#include<vector>
using namespace std;

class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int drink = 0;
        int empty = 0;

        while (numBottles > 0) {
            drink += numBottles;           
            empty += numBottles;           
            numBottles = 0;

            if(empty >= numExchange){
                empty -= numExchange;
                numBottles++;
                numExchange++;
            }       
        }
        return drink;               
    }
};