//1544. Make The String Great

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        int n = s.size();
        int i = 0;
        string ans = "";

        while (i < n) {
            if (!st.empty() && abs(st.top() - s[i]) == 32) {
                st.pop();
            } else {
                st.push(s[i]);
            }
            i++;
        }

        while (!st.empty()) { 
            ans = st.top() + ans; 
            st.pop();
        }
        return ans;
    }
};

int main(){
    Solution s;
    string str = "leEeetcode";
    cout<<s.makeGood(str);
    return 0;
}