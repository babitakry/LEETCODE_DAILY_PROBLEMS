// 3870. Count Commas in Range

#include<vector>
using namespace std;

class Solution {
public:
    int countCommas(int n) {
        int ans = 0;

        for(int i = 1; i <= n; i++){
            if(i > 999){
                ans += 1;
            }
        }
        return ans;
    }
};