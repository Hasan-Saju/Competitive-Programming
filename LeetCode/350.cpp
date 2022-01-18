#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        map<int,int>mp;
        vector<int>result;

        for(auto x:nums1)
            mp[x]++;

        for(auto x:nums2)
        {
            if(mp[x])
            {
                result.push_back(x);
                mp[x]--;
            }
        }
        for(auto x:result)
            cout<<x<<" ";
        return result;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,2,2,1};
    vector<int>vec2 = {2,2};
    obj.intersect(vec, vec2);
}





