#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkSubarraySum(vector<int>& nums, int k)
    {
        unordered_map<int, int>mp;
        mp[0] = -1;
        int total=0;
        for(int i=0; i<nums.size(); i++)
        {
            total+=nums[i];
            int mod = total%k;
            if(mp.find(mod)!=mp.end() and i - mp[mod]>=2)
                return true;
            if(mp.find(mod)==mp.end())
                mp[mod] = i;
        }
        return false;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {3,2,6,4,7};
    cout<<obj.checkSubarraySum(vec, 13);
}
