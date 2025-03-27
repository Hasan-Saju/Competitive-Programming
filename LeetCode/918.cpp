#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxSubarraySumCircular(vector<int>& nums)
    {
        int gmax = nums[0], gmin = nums[0];
        int total = 0, curmax = 0, curmin = 0;
        for(auto x:nums)
        {
            curmax = max(x, curmax+x);
            curmin = min(x, curmin+x);
            total += x;

            gmax = max(gmax, curmax);
            gmin = min(gmin, curmin);
        }

        return gmax > 0 ? max(gmax, total-gmin) : gmax;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {5,-3,5};
    cout<<obj.maxSubarraySumCircular(vec);
}

