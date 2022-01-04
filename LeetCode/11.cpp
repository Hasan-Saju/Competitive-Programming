#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int>& height)
    {
        int ans=0;
        for(int i=0, j=height.size()-1; i<height.size(), j>=0; )
        {
            if(i>=height.size() or j<0)
                break;
                ans=max(ans,min(height[i],height[j])*abs(i-j));
                if(height[i]>=height[j])
                    j--;
                else i++;

            //cout<<i<<" "<<j<<" "<<ans<<"\n";
        }
        cout<<ans;
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,2,4,3};
    obj.maxArea(vec);
}


