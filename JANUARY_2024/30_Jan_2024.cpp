//150. Evaluate Reverse Polish Notation
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){

                int top1 = s.top();
                s.pop();
                int top2 = s.top();
                s.pop();

                if(tokens[i] == "+")
                  s.push(top1 + top2);
                else if(tokens[i] == "-")
                  s.push(top2 - top1);
                else if(tokens[i] == "*")
                  s.push(top1*top2);
                else if(tokens[i] == "/")
                  s.push(top2/top1);
            }
            else{
                s.push(stoi(tokens[i]));
            }
        }
        int ans = s.top();
        s.pop();
        return ans; 
    }
};

int main()
{
    Solution s;
    vector<string> tokens{"2","1","+","3","*"};
    cout<<s.evalRPN(tokens);
    return 0;
}