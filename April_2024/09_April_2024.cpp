//2073. Time Needed to Buy Tickets

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int cnt = 0;
        while(tickets[k]){
            for(int i=0;i<tickets.size();i++){
                if(tickets[i] != 0){
                    tickets[i] = tickets[i] - 1;
                    cnt++;
                }
                if(tickets[k] == 0){
                    return cnt;
                }
            }
        }
        return cnt;
    }
};

int main(){
    Solution s;
    vector<int> tickets{5,1,1,1};
    int k=0;

    cout<<s.timeRequiredToBuy(tickets,k);
    return 0;
}