#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int>& height)
    {
        int i=0;
        int j=height.size()-1;
        int ans = INT_MIN;

        while(i<j)
        {
            int len = j-i;
            int areat = min(height[j], height[i])*len;

            ans = max(ans, areat);

            if(height[i]<height[j])
                i++;
            else
                j--;
        }

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {8,7,2,1};
    cout<<obj.maxArea(vec);
}
