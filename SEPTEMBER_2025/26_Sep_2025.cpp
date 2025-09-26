// 611. Valid Triangle Number

//Approach-1 (Brute Force)
//T.C : O(n^3)
//S.C : O(1)

#include<vector>
using namespace std;
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 0;

        for(int i = 0; i <= n-3; i++){
            for(int j = i+1; j <= n-2; j++){
                for(int k = j+1; k <= n-1; k++){
                    if(nums[i]+nums[j] > nums[k]){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};


//Approach-2 (Two Pointer)
//T.C : O(n^2)
//S.C : O(1)

class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 0;

        for(int k = n-1; k >= 2 ; k--){
            int i = 0, j = k-1;
            while(i < j){
                if(nums[i] + nums[j] > nums[k]){
                    count += (j-i);
                    j--;
                }
                else{
                    i++;
                }
            }
        }
        return count;
    }
};