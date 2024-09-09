#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        vector<int>ans;
        vector<int>::iterator itrLow, itrHigh;

        itrLow = lower_bound(nums.begin(), nums.end(), target);
        itrHigh = upper_bound(nums.begin(), nums.end(), target);



        if(itrLow != nums.end() and *itrLow == target)
        {
            int lowidx = itrLow - nums.begin();
            int highidx = itrHigh - nums.begin() -1;

            ans.push_back(lowidx);
            ans.push_back(highidx);
        }
        else
        {
            ans.push_back(-1);
            ans.push_back(-1);
        }

        return ans;

    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1};
    vector<int>test;
    test = obj.searchRange(vec, 0);

    for(auto x: test)
        cout<<x<<" ";
}

