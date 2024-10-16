#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumGap(vector<int>& nums)
    {
        map<int, int>mp;
        for(auto x:nums)
            mp[x]++;

        int prev = -1;
        int mx = 0;
        for(auto x:mp)
        {
            if(prev!=-1)
            {
                int diff = abs(x.first - prev);
                mx = max(mx, diff);
            }

            prev = x.first;
        }
        if(nums.size()==1)
            mx = 0;

        return mx;

    }
};

int main()
{
    Solution obj;
    vector<int>vec = {10};
    cout<<obj.maximumGap(vec);
}
