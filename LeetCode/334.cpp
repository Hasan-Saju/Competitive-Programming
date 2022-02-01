#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool increasingTriplet(vector<int>& nums)
    {
        int first=INT_MAX,second=INT_MAX;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            if(second<nums[i])return true;
            if(first<nums[i])second=min(second,nums[i]);
            first=min(first,nums[i]);
        }
        return false;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,5,0,4,1,3};
    bool ans=obj.increasingTriplet(vec);
    cout<<ans;
}





