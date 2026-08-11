#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        stack<pair<int, int>>st;
        int maxArea = INT_MIN;

        for(int i=0; i<heights.size(); i++)
        {
            int start = i;

            while(!st.empty() and st.top().second>heights[i])
            {
                auto [index, height] = st.top();
                maxArea = max(maxArea, height*(i-index));
                start = index;
                st.pop();
            }
            //cout<<start
            st.push({start, heights[i]});
        }

        while(!st.empty())
        {
            auto [index, height] = st.top();
            maxArea = max(maxArea, height*((int)heights.size()-index));
            st.pop();
        }

        return maxArea;

    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,1,2};
    obj.largestRectangleArea(vec);
}

