class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minuteAngle = minutes * 6;
        double hourAngle = (hour * 30) + (minutes * 0.5);
        double angle = abs(minuteAngle - hourAngle);
        double ans = min(angle,360-angle);
        return ans;
    }
};