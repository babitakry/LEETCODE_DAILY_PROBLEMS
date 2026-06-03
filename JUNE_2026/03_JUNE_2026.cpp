//3635. Earliest Finish Time for Land and Water Rides II

class Solution {
    int findFinishTime(vector<int> &start1, vector<int> &duration1, vector<int> &start2, vector<int> &duration2){
        int finish1 = INT_MAX;
        int finish2 = INT_MAX;

        for (int i = 0; i < start1.size(); i++) {
            int temp = start1[i] + duration1[i];
            finish1 = min(finish1, temp);
        }

        for (int i = 0; i < start2.size(); i++) {
            int temp = max(finish1,start2[i]) + duration2[i];
            finish2 = min(finish2, temp);
        }

        return finish2;
    }
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int land_water = findFinishTime(landStartTime, landDuration, waterStartTime, waterDuration);

        int water_land = findFinishTime(waterStartTime, waterDuration, landStartTime, landDuration);

        return min(land_water, water_land);
    }
};