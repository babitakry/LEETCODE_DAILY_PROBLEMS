// 3740. Minimum Distance Between Three Equal Elements I

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int min_dist = INT_MAX; 

        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                for(int k = j + 1; k < nums.size(); k++){
                    if(nums[i] == nums[j] && nums[j] == nums[k] && nums[k] == nums[i]){
                        int distance = abs(i - j) + abs(j - k) + abs(k - i);
                        if(distance < min_dist){
                            min_dist = distance;
                        }
                    }
                }
            }
        }
        return min_dist == INT_MAX ? -1 : min_dist;
    }
};