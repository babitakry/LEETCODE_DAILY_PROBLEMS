#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        for (int i = 1; i < words.size(); ) {
            string prev = words[i - 1];
            string curr = words[i];
            
            sort(prev.begin(), prev.end());
            sort(curr.begin(), curr.end());

            if (prev == curr) {
                words.erase(words.begin() + i);
            } 
            else {
                i++;
            }
        }
        return words;
    }
};


int main(){
    vector<string> words = {"abba","baba","bbaa","cd","cd"};

    Solution s;
    vector<string> ans;
    ans = s.removeAnagrams(words);

    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<< " ";
    }

    return 0;
}