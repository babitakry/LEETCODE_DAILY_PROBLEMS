// 3633. Earliest Finish Time for Land and Water Rides I

class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {

        int mini1 = INT_MAX;
        int mini2 = INT_MAX;

        for (int i = 0; i < landStartTime.size(); i++) {
            for (int j = 0; j < waterStartTime.size(); j++) {
                int landFinishTime = landStartTime[i] + landDuration[i];
                int waterStart = max(landFinishTime, waterStartTime[j]);
                int waterFinishTime = waterStart + waterDuration[j];

                mini1 = min(mini1, waterFinishTime);
            }
        }

        for (int i = 0; i < waterStartTime.size(); i++) {
            for (int j = 0; j < landStartTime.size(); j++) {
                int waterFinishTime = waterStartTime[i] + waterDuration[i];
                int landStart = max(waterFinishTime, landStartTime[j]);
                int landFinishTime = landStart + landDuration[j];

                mini2 = min(mini2, landFinishTime);
            }
        }

        cout << mini1 << " " << mini2;
        return min(mini1, mini2);
    }
};