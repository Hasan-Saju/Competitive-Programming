#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int largestRectangleArea(vector<int>& heights)
    {
        stack<pair<int, int>>st;
        int maxArea = 0;

        for(int i=0; i<heights.size(); i++)
        {
            int index = i;
            while(!st.empty() and st.top().second>heights[i])
            {
                auto [ind, val] = st.top();
                index = ind;
                maxArea = max(maxArea, val*(i-ind));
                //cout<<i<<" "<<maxArea<<endl;
                st.pop();
            }

            st.push({index, heights[i]});
        }

        while(!st.empty())
        {
            auto [ind, val] = st.top();
            maxArea = max(maxArea, (val * ((int)heights.size()-ind) ) );
            st.pop();
        }

        return maxArea;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,1,5,6,2,3};
    cout<<obj.largestRectangleArea(vec);
}
