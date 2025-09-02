#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findErrorNums(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        int miss=-1, dup=-1, sum=0;
        for(int i=1; i<=nums.size(); i++)
        {
            sum+=nums[i-1];
            if(i<nums.size() and nums[i]==nums[i-1])
                dup = nums[i];
        }
        int n = nums.size();
        miss = (n*(n+1))/2 - (sum-dup);
        vector<int>res = {dup, miss};
        return res;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.findErrorNums(vec);
}

