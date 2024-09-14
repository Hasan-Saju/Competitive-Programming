#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int>all;
        int i, j;
        for(i=0, j=0; i<nums1.size() && j<nums2.size();)
        {
            if(nums1[i]<nums2[j])
            {
                all.push_back(nums1[i]);
                i++;
            }
            else
            {
                all.push_back(nums2[j]);
                j++;
            }
        }

        if(i>=nums1.size())
        {
            while(j<nums2.size())
            {
                all.push_back(nums2[j]);
                j++;
            }
        }

        if(j>=nums2.size())
        {
            while(i<nums1.size())
            {
                all.push_back(nums1[i]);
                i++;
            }
        }

        for(auto x:all)
            cout<<x<<" \n";

        int sz = all.size();
        if(sz%2)
        {
            return all[sz/2];
        }
        else
        {
            return (all[sz/2] + all[(sz/2)-1])/(double)2;
        }

    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,2,3};
    vector<int>vec2 = {1,3,5};
    cout<<obj.findMedianSortedArrays(vec, vec2);
}

