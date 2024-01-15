//2225. Find Players With Zero or One Losses

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> win;
        unordered_map<int,int> lose;
        vector<vector<int>> answer(2);
        for(int i=0;i<matches.size();i++){
            win[matches[i][0]]++;
            lose[matches[i][1]]++;
        }

        for(auto it : win){
            if(lose[it.first] == 0)
               answer[0].push_back(it.first);
            
        }

        for(auto it : lose){
            if(it.second == 1)
               answer[1].push_back(it.first);
        }
        sort(answer[0].begin(),answer[0].end());
        sort(answer[1].begin(),answer[1].end());
        return answer;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> matches{{1,3},{2,3},{3,6},{5,6},{5,7},{4,5},{4,8},{4,9},{10,4},{10,9}};
    vector<vector<int>> answer(2);
    answer = s.findWinners(matches);
    for(int i=0;i<answer.size();i++){
        for(int j=0;j<answer[i].size();j++){
            cout<<answer[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}