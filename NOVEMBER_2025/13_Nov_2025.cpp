#include<vector>
using namespace std;

class Solution {
public:
    int maxOperations(string s) {
        int cnt=0;
        int cntOne=0;
        //init: cnt how many 1's are present behind the 0 and add them to the final answer
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='1')
                cnt++;
            if(s[i]=='1' && s[i+1] =='0')
                cntOne += cnt;
        }
        return cntOne;
    }
};