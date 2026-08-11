#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minMeetingRooms(vector<vector<int>>& intervals)
    {
        sort(intervals.begin(), intervals.end());
        priority_queue<int, vector<int>, greater<int>> pq;

        int ans = INT_MIN;
        for(int i=0; i<intervals.size(); i++)
        {
            if(!pq.empty() && pq.top()<= intervals[i][0])
                pq.pop();

            pq.push(intervals[i][1]);
            int sz = pq.size();
            ans = max(ans, sz);
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{0,30}, {5,10}, {15,20}};
    obj.minMeetingRooms(vec);
}
