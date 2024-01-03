//2125. Number of Laser Beams in a Bank

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prevcntone = 0;
        int ans = 0;
        for(int i=0;i<bank.size();i++){
            int cntone = 0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j] == '1')
                   cntone++;
            }
            ans = ans + (cntone * prevcntone);
            if(cntone != 0)
               prevcntone = cntone;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<string> bank{"011001","000000","010100","001000"};
    cout<<s.numberOfBeams(bank);
    return 0;
}