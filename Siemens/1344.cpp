#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double angleClock(int hour, int minutes) {
        int oneMin = 6;
        int oneHour = 30;

        double minAng = minutes*oneMin;
        double hrAng = (hour%12 + minutes/60.0 )*oneHour;

        double diff = abs(minAng-hrAng);

        return min( diff, 360-diff );
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.angleClock(12,30);
}

