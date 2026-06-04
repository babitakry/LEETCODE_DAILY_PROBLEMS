// 3751. Total Waviness of Numbers in Range I

class Solution {
    int find_waviness(int n){
        int temp = n;
        vector<int> digitArr;
        while(n){
            int digit = n%10;
            digitArr.push_back(digit);
            n = n/10;
        }

        int size = digitArr.size();
        int cnt = 0;
        for(int i = 1; i < size-1; i++){
            if(i > 0 && i < size-1){
                if((digitArr[i-1] < digitArr[i] && digitArr[i] > digitArr[i+1]) ||
                   (digitArr[i-1] > digitArr[i] && digitArr[i] < digitArr[i+1])
                   ){
                    cnt++;
                }
            }
        }
        return cnt;
    }
public:
    int totalWaviness(int num1, int num2) {
       int waviness = 0;

       for(int i = num1; i <= num2; i++){
           waviness += find_waviness(i);
       }
       return waviness;
    }
};