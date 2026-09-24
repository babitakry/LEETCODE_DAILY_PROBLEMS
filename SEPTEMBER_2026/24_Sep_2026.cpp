//3550. Smallest Index With Digit Sum Equal to Index

#include<vector>
using namespace std;

class Solution {
    int digitSum(int num){
        int sum = 0;
        while(num){
            sum += num%10;
            num /= 10;
        }
        return sum;
    }
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(i == digitSum(nums[i])){
                return i;
            }
        }
        return -1;
    }
};