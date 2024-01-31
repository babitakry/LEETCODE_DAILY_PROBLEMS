//739. Daily Temperatures

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n,0);
        stack<int> s;

        for(int i=temperatures.size()-1;i>=0;i--){
            while(!s.empty() && temperatures[s.top()] <= temperatures[i])
              s.pop();
            if(!s.empty())
              ans[i] = s.top()-i;
            s.push(i);
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> temperatures{73,74,75,71,69,72,76,73};
    vector<int> ans;
    ans = s.dailyTemperatures(temperatures);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}