// 1189. Maximum Number of Balloons

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> textFreq, balloonFreq;

        string s = "balloon";
        for(int i = 0; i < s.size(); i++){
            balloonFreq[s[i]]++;
        }

        for(int i = 0; i < text.size(); i++){
            textFreq[text[i]]++;
        }

        int ans = INT_MAX;
        for(auto it: balloonFreq){
            char ch = it.first;
            int req = it.second;

            ans = min(ans, textFreq[ch]/req);
        }
        return ans;
    }
};