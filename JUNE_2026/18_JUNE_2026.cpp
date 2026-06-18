// 1344. Angle Between Hands of a Clock

class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hrAngle = ( hour + (minutes) / 60.0 ) * 30;
        double minAngle = minutes * 6;

        double diff = abs(hrAngle - minAngle);
        return min(diff, 360 - diff);
    }
};