//1291. Sequential Digits
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s = "123456789";
        vector<int> nums, ans;
        for (int i = 0; i < s.size(); i++) {
            string x = "";
            for (int j = i; j < s.size(); j++) {
                x += s[j];
                int num = stoi(x);
                if (low <= num && num <= high) {
                    ans.push_back(num);
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    Solution s;
    int low = 1000, high = 13000;
    vector<int> ans;
    ans = s.sequentialDigits(low,high);
    for(auto x: ans)
      cout<<x<<" ";
    return 0;
}