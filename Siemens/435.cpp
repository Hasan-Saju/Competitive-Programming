#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int lastend = intervals[0][1];
        int eras=0;
        for(int i=1; i<intervals.size(); i++)
        {
            int start = intervals[i][0];
            int endd = intervals[i][1];

            if(start>=lastend)
                lastend = endd;
            else
            {
                eras++;
                lastend = min(endd, lastend);
            }
        }
        return eras;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.twoSum(vec);
}
