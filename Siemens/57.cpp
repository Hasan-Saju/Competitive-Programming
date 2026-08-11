#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> insertt(vector<vector<int>>& intervals, vector<int>& newInterval)
    {
        vector<vector<int>> ans;
        int inprocess=0;

        if(intervals.size()==0)
        {
            ans.push_back(newInterval);
            return ans;
        }

        for(auto ele:intervals)
        {
            if(newInterval[1]<ele[0] and inprocess==0)
            {
                ans.push_back(newInterval);
                inprocess=2;
            }
            if(ele[1]<newInterval[0] or ele[0]>newInterval[1])
            {
                if(inprocess==1)
                {
                    ans.push_back(newInterval);
                    inprocess=2;
                }
                ans.push_back(ele);
            }
            else
            {
                inprocess=1;
                newInterval[0] = min(ele[0], newInterval[0]);
                newInterval[1] = max(ele[1], newInterval[1]);
            }
        }
        if(inprocess==0 or inprocess==1)
            ans.push_back(newInterval);

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {4,8};
    vector<vector<int>>v = {{1,2},{3,5}, {6,7}, {8,10}, {12,16} };
    vector<vector<int>>v2 = obj.insertt(v, vec);
}
