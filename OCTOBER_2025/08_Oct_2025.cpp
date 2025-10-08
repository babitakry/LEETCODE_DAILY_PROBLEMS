#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end()); 
        int n = spells.size();
        int m = potions.size();
        vector<int> ans;

        for(int i = 0; i < n; i++){
            long long spell = spells[i];
            int left = 0, right = m - 1;
            int idx = m;
            while(left <= right){
                int mid = left + (right - left) / 2;
                if(spell * 1LL * potions[mid] >= success){
                    idx = mid;
                    right = mid - 1; 
                } else {
                    left = mid + 1;
                }
            }
            ans.push_back(m - idx); 
        }

        return ans;
    }
};


int main(){
    vector<int> spells = {5,1,3};
    vector<int> potions = {1,2,3,4,5};
    long long success = 7;
    vector<int> ans;

    Solution obj;
    ans = obj.successfulPairs(spells, potions, success);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}