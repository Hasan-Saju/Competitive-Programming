#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> mergee(vector<vector<int>>& intervals)
    {
        vector<vector<int>>ans;
        sort(intervals.begin(), intervals.end());

        vector<int> current = intervals[0];
        for(int i=1; i<intervals.size(); i++)
        {
            if(current[1]<intervals[i][0])
            {
                ans.push_back(current);
                current = intervals[i];
            }
            else
            {
                current[0] = min(current[0], intervals[i][0]);
                current[1] = max(current[1], intervals[i][1]);
            }
        }
        ans.push_back(current);
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<vector<int>>vec = {{1, 4},

        {
            0,0
        }
    };

    vector<vector<int>> ans = obj.mergee(vec);
    for(auto x:ans)
    {
        for(auto y:x)
        {
            cout<<y<<" ";
        }
        cout<<"\n";
    }
}
