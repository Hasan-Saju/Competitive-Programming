#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<int>prev = intervals[0];
        int ans = 0;
        for(int i=1; i<intervals.size(); i++)
        {
            vector<int>current = intervals[i];
            if(prev[1]>current[0])
            {
                ans++;
                prev = prev[1]>current[1] ? current:prev;
            }
            else
                prev = current;
        }

        return ans;
    }
};

int main()
{
    Solution obj;
    vector<vector<int>>vec = {{1, 5},
    {2,3},
    {
        3, 4
    },
    {
        4, 5
    }
    };
    cout<<obj.eraseOverlapIntervals(vec);
}
