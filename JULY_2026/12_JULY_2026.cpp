// 1331. Rank Transform of an Array

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr;
        unordered_map<int, int> mpp;
        sort(temp.begin(), temp.end());

        int rank = 1;
        for(int i = 0; i < temp.size(); i++){
            if(mpp.find(temp[i]) == mpp.end()){
                mpp[temp[i]] = rank;
                rank++;
            }
        }
        vector<int> ans;
        for(int i = 0; i < arr.size(); i++){
            ans.push_back(mpp[arr[i]]);
        }

        return ans;
    }
};