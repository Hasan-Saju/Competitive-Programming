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
            int start = i;
            while (!st.empty() and st.top().second > heights[i] )
            {
                int index = st.top().first;
                int value = st.top().second;

                maxArea = max(maxArea, value*(i-index));
                start = index;
                st.pop();
            }
            st.push(make_pair(start, heights[i]));
        }

        while(!st.empty())
        {
            int temp = st.top().second * (heights.size() - st.top().first );
            maxArea = max(maxArea, temp );
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

