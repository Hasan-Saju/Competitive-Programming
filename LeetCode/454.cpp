#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4)
    {
        int ans=0;

        map<int,int>mp;

        for(auto x:nums1 )
        {
            for(auto y:nums2)
            {
                mp[x+y]++;
            }
        }

        for(auto x:nums3 )
        {
            for(auto y:nums4)
            {
                ans += mp[-(x+y)];
            }
        }
    cout<<ans;
    return ans;

    }
};

int main()
{
    Solution obj;
    vector<int> nums1{1,2};
    vector<int> nums2{-2,-1};
    vector<int> nums3{-1,2};
    vector<int> nums4{0,2};
    obj.fourSumCount(nums1,nums2,nums3,nums4);
}
