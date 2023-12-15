//1436. Destination City
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> mpp;
        string ans = "";
        for(int i=0;i<paths.size();i++){
            mpp[paths[i][0]]++;
            mpp[paths[i][1]]++;
        }
        for(int i=0;i<paths.size();i++){
            if(mpp[paths[i][1]] == 1)
                ans = paths[i][1];
        }
        return ans;
    }
};

int main()
{
    Solution s1;
    vector<vector<string>> paths{{"London","New York"},{"New York","Lima"},{"Lima","Sao Paulo"}};
    string s = "";
    s = s1.destCity(paths);
    cout<<s;
    return 0;
}