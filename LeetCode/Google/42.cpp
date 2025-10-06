#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int trap(vector<int>& height)
    {
        int mx=INT_MIN;
        int mxInd=0;
        for(int i=0; i<height.size(); i++)
        {
            if(height[i]>=mx)
            {
                mx=height[i];
                mxInd=i;
            }
        }

        int left=0;
        int leftmx=height[left];
        int water = 0;
        while(left<mxInd)
        {
            if(height[left]>leftmx)
                leftmx = height[left];

            water+= min(leftmx-height[left], mx);

            cout<<water<<endl;
            left++;
        }

        int right = height.size()-1;
        int rightmx=height[right];
        while(right>mxInd)
        {

            if(height[right]>rightmx)
                rightmx = height[right];

            water+= min(rightmx-height[right], mx);
            cout<<water<<endl;
            right--;
        }

        return water;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<obj.trap(vec);
}

