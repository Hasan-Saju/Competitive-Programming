#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canAttendMeetings(vector<vector<int>>& intervals)
    {
        sort(intervals.begin(), intervals.end());

        for(int i=1; i<intervals.size(); i++)
        {
            if(intervals[i-1][1] > intervals[i][0])
                return false;
        }

        return true;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.twoSum(vec);
}
