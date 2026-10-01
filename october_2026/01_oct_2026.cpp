//20. Valid Parentheses
#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
                // Stack should not be empty
                if (st.empty()) {
                    return false;
                }
                char topCh = st.top();
                if((topCh == '(' && s[i] == ')') || 
                   (topCh == '{' && s[i] == '}') ||
                   (topCh == '[' && s[i] == ']')
                   ){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                st.push(s[i]);
            }
        }
        return st.empty() ? true : false;
    }
};