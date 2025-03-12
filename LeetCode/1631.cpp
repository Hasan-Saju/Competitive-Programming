#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {

        int row = heights.size();
        int col = heights[0].size();

        vector<vector<int>>dis(row, vector<int>(col, INT_MAX));
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>> >pq;

        pq.push({0,0,0});
        int X[4] = {1,-1,0,0};
        int Y[4] = {0,0,1,-1};
        dis[0][0]=0;

        while(!pq.empty())
        {
            //auto [diff, x1, y1] = pq.top();
            auto temp = pq.top();
            int diff = temp[0], x1 = temp[1], y1 = temp[2];

            pq.pop();


            for(int i=0; i<4; i++)
            {
                int x2 = x1+X[i];
                int y2 = y1+Y[i];

                if(x2<0 or y2<0 or x2>=row or y2>=col)
                    continue;

                int newDiff = max(diff, abs(heights[x1][y1]-heights[x2][y2]));
                if(newDiff<dis[x2][y2])
                {
                    dis[x2][y2] = newDiff;
                    pq.push({newDiff, x2, y2});
                }

            }
        }

        return dis[row-1][col-1];
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{1,2,2},{3,8,2},{5,3,5}};
    cout<<obj.minimumEffortPath(vec);
}

