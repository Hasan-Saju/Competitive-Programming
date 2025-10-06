#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        vector<int>v(nums1.size(),0);
        int i =0;
        int j=0;
        for(int k=0; k<(m+n); k++)
        {
            if(i<m and j<n and nums1[i]<=nums2[j])
            {
                v[k] = nums1[i];
                i++;
            }
            else if(i<m and j<n and nums2[j]<nums1[i])
            {
                v[k] = nums2[j];
                j++;
            }
            else if(i>=m and j>=n)
                break;
            else if(i>=m and j<n)
            {
                v[k] = nums2[j];
                j++;
            }
            else if(j>=n and i<m)
            {
                v[k] = nums1[i];
                i++;
            }
        }
        for(int k=0; k<nums1.size(); k++)
            nums1[k] = v[k];
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,2,3,0,0,0};
    vector<int>vec2 = {2,5,6};
    obj.mergee(vec, 3, vec2, 3);
}

