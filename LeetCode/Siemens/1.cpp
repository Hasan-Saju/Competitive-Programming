#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int>mp;
        int sz=nums.size();

        for(int i=0; i<sz; i++)
           mp[nums[i]]=i;

        for(int i=0; i<sz; i++)
        {
            int comp = target-nums[i];
            if(mp.find(comp)!=mp.end() and i!=mp[comp])
                return {i, mp[comp]};
        }

        return {};
    }
};


int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.twoSum(vec, 9);
}

