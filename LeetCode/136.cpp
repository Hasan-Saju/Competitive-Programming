#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int>& nums)
    {
        map<int,int>mp;
        for(auto x:nums)
        {
            mp[x]++;
        }
        int ans;
        for(auto x:mp )
        {
            if(x.second==1)
                ans = x.first;
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,2,1};
    obj.singleNumber(vec);
}



