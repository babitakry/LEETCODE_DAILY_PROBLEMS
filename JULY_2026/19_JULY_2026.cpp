// 1081. Smallest Subsequence of Distinct Characters

class Solution {
public:
    string smallestSubsequence(string s) {
        int n = s.size();

        vector<bool> taken(26, false);
        vector<int> lastIndex(26);

        for(int i = 0; i < n; i++){
            lastIndex[s[i] - 'a'] = i;
        }

        string result = "";
        for(int i = 0; i < n; i++){
            char index = s[i]-'a';
            if(taken[index] == true)
               continue;
            
            while(!result.empty() && result.back() > s[i] && lastIndex[result.back()-'a'] > i){
                taken[result.back()-'a'] = false;
                result.pop_back();
            }

            result.push_back(s[i]);
            taken[index] = true;
        }
        return result;
    }
};