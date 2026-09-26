//1807. Evaluate the Bracket Pairs of a String

#include<vector>
#include<unordered_map>
using namespace std;


class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mpp;

        for(int i = 0; i < knowledge.size(); i++){
            mpp[knowledge[i][0]] = knowledge[i][1];
        }

        string ans = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                i++;
                int start = i;
                int end;
                while(s[i] != ')'){
                    end = i;
                    i++;
                }
                int length = end - start + 1;
                string key = s.substr(start, length);

                if(mpp.find(key) != mpp.end()){
                    ans += mpp[key];
                }
                else{
                    ans += '?';
                }
            }
            if(s[i] != ')')
                ans += s[i];
        }
        return ans;
    }
};