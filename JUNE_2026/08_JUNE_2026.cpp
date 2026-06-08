// 2161. Partition Array According to Given Pivot

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector<int> less;
        vector<int> equal;
        vector<int> greater;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < pivot){
                less.push_back(nums[i]);
            }
            else if(nums[i] == pivot){
                equal.push_back(nums[i]);
            }
            else{
                greater.push_back(nums[i]);
            }
        }

        int idx = 0;

        for(int i = 0; i < less.size(); i++){
            nums[idx] = less[i];
            idx++;
        }

        for(int i = 0; i < equal.size(); i++){
            nums[idx] = equal[i];
            idx++;
        }

        for(int i = 0; i < greater.size(); i++){
            nums[idx] = greater[i];
            idx++;
        }

        return nums;
    }
};