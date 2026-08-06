// 3345. Smallest Divisible Digit Product I

#include<iostream>
using namespace std;

class Solution {
    int product(int n){
        int prod = 1;
        while(n){
            int digit = n % 10;
            n = n / 10;
            prod *= digit;
        }
        return prod;
    }
public:
    int smallestNumber(int n, int t) {
        int prod = product(n);

        while(prod % t != 0){
            n++;
            prod = product(n);
        }
        return n;
    }
};