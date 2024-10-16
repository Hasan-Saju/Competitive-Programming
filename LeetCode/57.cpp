#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval)
    {

        vector<vector<int>> ans;
        int complete = 0;

        for(auto v: intervals)
        {
            if(complete)
                ans.push_back(v);
            else if(newInterval[1]<v[0])
            {
                ans.push_back(newInterval);
                ans.push_back(v);
                complete = 1;
            }
            else if(newInterval[0]>v[1])
            {
                ans.push_back(v);
            }
            else
            {
                newInterval[0] = min(v[0], newInterval[0]);
                newInterval[1] = max(v[1], newInterval[1]);
            }

        }

        if(!complete)
            ans.push_back(newInterval);
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<vector<int>>vec = {{1, 3},
        {6, 9}
    };
    vector<int>v = {2, 5};

    obj.insertt(vec,v);
}
