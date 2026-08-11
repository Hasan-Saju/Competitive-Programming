#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;

        for(auto x:intervals)
        {
            if(ans.empty()||ans.back()[1] < x[0])
                ans.push_back(x);
            else
            {
                ans.back()[1] = max(x[1], ans.back()[1]);
            }
        }

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.twoSum(vec);
}

