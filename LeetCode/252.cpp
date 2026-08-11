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
            if(intervals[i][0]>=intervals[i-1][1])
                continue;
            else return false;
        }
        return true;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{7,10},{2,4}, {1,9}};
    cout<<obj.canAttendMeetings(vec);
}
