#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int counter = 0;
        priority_queue<int, vector<int>, greater<int>>pq;
        int ans = 0;
        for(int i=0; i<intervals.size(); i++)
        {
            while(!pq.empty() and pq.top()<=intervals[i][0])
                pq.pop();
            pq.push(intervals[i][1]);
            ans = max(ans, (int)pq.size());
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{7,10}, {2,4}};
    cout<<obj.minMeetingRooms(vec);
}

