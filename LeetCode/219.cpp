
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
        map<int, vector<int>>mp;
        for(int i=0; i<nums.size(); i++)
            mp[nums[i]].push_back(i);

        for(auto x:mp)
        {
            vector<int>vec = x.second;
            sort(vec.begin(), vec.end());

            for(int i=1; i<vec.size(); i++)
                if(abs(vec[i] - vec[i-1])<=k)
                    return true;
        }
        return false;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,2,3,1};
    cout<<obj.containsNearbyDuplicate(vec, 3);
}
