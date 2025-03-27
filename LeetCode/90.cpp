#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int sz = nums.size();
        int total = 1<<sz;
        set<vector<int>>resultSet;
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<total; i++)
        {
            vector<int>temp;
            for(int j=0; j<sz; j++)
            {
                int mask = 1<<j;

                if(mask&i)
                    temp.push_back(nums[j]);
            }
            resultSet.insert(temp);
        }
        for(auto x:resultSet)
            ans.push_back(x);

        return ans;

    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,2,2};
    obj.subsetsWithDup(vec);
}

