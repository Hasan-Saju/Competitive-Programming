#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int trap(vector<int>& height)
    {
        int lmax = height[0];
        int rmax = height[height.size()-1];
        int i = 0;
        int j = height.size()-1;
        int water = 0;
        vector<int>w(height.size(),0);

        while(i<j)
        {
            w[i] = max(0, min(lmax,rmax)-height[i]);
            w[j] = max(0, min(lmax,rmax)-height[j]);

            lmax = max(lmax, height[i]);
            rmax = max(rmax, height[j]);

            if(height[i]<height[j])
                i++;
            else
                j--;
        }

        for(auto x:w)
            water+=x;

        return water;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<obj.trap(vec);
}

