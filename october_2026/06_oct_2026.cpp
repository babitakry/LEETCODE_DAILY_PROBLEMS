// 921. Minimum Add to Make Parentheses Valid

#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int cnt = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push(s[i]);
            }
            else if(s[i] == ')'){
                if(st.empty()){
                    cnt += 1;
                }
                else{
                    st.pop();
                }
            }
        }

        if(!st.empty()){
            cnt += st.size();
        }

        return cnt;
    }
};