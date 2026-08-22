// 3622. Check Divisibility by Digit Sum and Product

#include <iostream>
using namespace std;

class Solution {
public:
    bool checkDivisibility(int n) {
        int num = n;

        int digitSum = 0;
        int digitProduct = 1;
        while(n){
            int digit = n % 10;
            digitSum += digit;
            digitProduct *= digit;

            n /= 10;
        }

        int sum = digitSum + digitProduct;
        if(num % sum == 0){
            return true;
        }
        return false;
    }
};