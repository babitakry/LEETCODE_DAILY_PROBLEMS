// 3120. Count the Number of Special Characters I

class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> s;
        
        for(auto it: word){
            s.insert(it);
        }
        
        int cnt = 0;
        
        for(auto it = s.begin();it != s.end();it++){
            char ch = *it;
            if(s.find(abs(ch-32)) != s.end()){
                cnt++;
            }
            
        }
        return cnt;
    }
};