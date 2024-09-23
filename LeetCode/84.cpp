#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ans = 0;
        for(int i=0; i<heights.size(); i++)
        {
            int mn = 10005;
            int j = i;
            int prev = 0;
            while(j<heights.size())
            {
                mn = min(mn, heights[j]);
                int area = mn * (j-i+1);
                ans = max(ans, area);
//                if(area<prev)
                    //break;
                prev = area;
                j++;
            }

        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {6,4,2,0,3,2,0,3,1,4,5,3,2,7,5,3,0,1,2,1,3,4,6,8,1,3};
    cout<<obj.largestRectangleArea(vec);
}

