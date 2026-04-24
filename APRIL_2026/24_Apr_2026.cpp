// 2833. Furthest Point From Origin

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int countL = 0;
        int countR = 0;
        int count_ = 0;

        for(int i = 0; i < moves.size(); i++){
            if(moves[i] == 'L'){
                countL++;
            }
            else if(moves[i] == 'R'){
                countR++;
            }
            else{
                count_++;
            }
        }

        int maxCount = max(countL, countR);
        int minCount = min(countL, countR);

        int ans = maxCount + count_ - minCount;
        return ans;
    }
};