#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<vector<int>>ans;
        int sz = nums.size();
        int total = 1<<sz;
        for(int i=0; i<total; i++)
        {
            vector<int>cur;
            for(int j=0; j<sz; j++)
            {
                int mask = 1<<j;
                if((i&mask)!=0)
                    cur.push_back(nums[j]);
            }
            ans.push_back(cur);
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.subsets(vec);
}

