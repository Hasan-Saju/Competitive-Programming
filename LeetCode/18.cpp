#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target)
    {
        map<int, int>kount;
        for(auto x:nums)
            kount[x]++;

        sort(nums.begin(), nums.end());
        vector<vector<int>>res;
        for(int i=0; i<nums.size(); i++)
        {
            kount[nums[i]]--;
            if(i-1>=0 and nums[i]==nums[i-1])
                continue;
            for(int j=i+1; j<nums.size(); j++)
            {
                kount[nums[j]]--;
                if(j>i+1 and nums[j]==nums[j-1])
                    continue;
                for(int k=j+1; k<nums.size(); k++)
                {
                    kount[nums[k]]--;
                    if(k>j+1 and nums[k]==nums[k-1])
                        continue;

                    long long left = (long long) target -  ((long long)nums[i]+nums[j]+nums[k]);
                    if(left>INT_MAX or left<INT_MIN)
                        continue;
                    if(kount[left]>0)
                    {
                        res.push_back({nums[i], nums[j], nums[k], (int)left});
                    }
                }

                for(int k=j+1; k<nums.size(); k++)
                    kount[nums[k]]++;
            }
            for(int j=i+1; j<nums.size(); j++)
                kount[nums[j]]++;
        }

        return res;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,0,-1,0,-2,2};
    obj.fourSum(vec,0);
}

