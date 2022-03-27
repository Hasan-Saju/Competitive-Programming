#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int trap(vector<int>& height)
    {

        int n=height.size();
        int ind=-1,maxx=INT_MIN;
        for(int i=0; i<n; i++)
        {
            if(height[i]>=maxx)
            {
                maxx=height[i];
                ind=i;
            }
        }
        int ans=0;
        int i=ind;
        int runMax=height[n-1];
        for(int j=n-2; i<j; j--)
        {
            if(height[j]>=runMax)
            {
                runMax=height[j];
            }
            else
            {
                ans += runMax-height[j];
                height[j] += runMax-height[j];
            }
        }

        //cout<<ans<<"\n";


        runMax=height[0];
        for(int j=1; i>j; j++)
        {
            if(height[j]>=runMax)
            {
                runMax=height[j];
            }
            else
            {
                ans += runMax-height[j];
                height[j] += runMax-height[j];
            }
        }

        cout<<ans;
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {4,2,0,3,2,5};
    obj.trap(vec);
}





