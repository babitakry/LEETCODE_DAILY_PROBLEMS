// 950. Reveal Cards In Increasing Order

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        int n = deck.size();
        queue<int> q;
        vector<int> ans(n,0);

        for(int i=0;i<deck.size();i++){
            q.push(i);
        }

        while(!q.empty()){
            for(int i=0;i<n;i++){
                int getFront = q.front();
                q.pop();
                ans[getFront] = deck[i];
                int getNextFront = q.front();
                q.pop();
                q.push(getNextFront);
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> deck{17,13,11,2,3,5,7};
    vector<int> ans;
    ans = s.deckRevealedIncreasing(deck);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}