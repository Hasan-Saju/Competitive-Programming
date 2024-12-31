#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums)
    {
        vector<int>prefix;
        vector<int>ans;
        prefix.push_back(nums[0]);

        for(int i=1; i<nums.size(); i++)
            prefix.push_back(prefix[i-1]+nums[i]);

        int sz = nums.size();
        ans.push_back(prefix[sz-1]-(sz*nums[0]));
        for(int i=1; i<nums.size(); i++)
        {
            int first = abs(prefix[i-1]-i*nums[i]);
            int second = abs(prefix[sz-1]-prefix[i]-(nums[i]*(sz-i-1)));

            ans.push_back(first+second);
        }

        return ans;

    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,4,6,8,10};
    vector<int>a = obj.getSumAbsoluteDifferences(vec);

    for(auto x:a)
        cout<<x<<" ";
}

