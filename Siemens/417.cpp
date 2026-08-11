#include<bits/stdc++.h>
using namespace std;
class Solution
{

public:
    void bfs(vector<vector<int>>& ocean, queue<int>& q, vector<vector<int>>& heights)
    {
        int X[4] = {1,-1,0,0};
        int Y[4] = {0,0,1,-1};

        while(!q.empty())
        {
            int x = q.front();
            q.pop();
            int y = q.front();
            q.pop();

            ocean[x][y] = 1;

            for(int i=0; i<4; i++)
            {
                int ux = x + X[i];
                int uy = y + Y[i];

                if( (ux>=0 and uy>=0) and (ux<heights.size() and uy<heights[0].size())
                        and heights[ux][uy]>= heights[x][y] and !ocean[ux][uy] )
                {
                    ocean[ux][uy] = 1;
                    q.push(ux);
                    q.push(uy);
                }
            }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights)
    {

        int row = heights.size();
        int col = heights[0].size();

        vector<vector<int>>pacific(row, vector<int>(col,0));
        vector<vector<int>>atlantic(row, vector<int>(col,0));

        queue<int>pac, atl;


        for(int i=0; i<row; i++)
        {
            pacific[i][0] = 1;
            atlantic[i][col-1] = 1;

            pac.push(i);
            pac.push(0);

            atl.push(i);
            atl.push(col-1);
        }

        for(int i=0; i<col; i++)
        {
            pacific[0][i] = 1;
            atlantic[row-1][i] = 1;

            pac.push(0);
            pac.push(i);

            atl.push(row-1);
            atl.push(i);
        }

        bfs(pacific, pac, heights);
        bfs(atlantic, atl, heights);

        vector<vector<int>>ans;

        for(int i=0; i<heights.size(); i++)
        {
            for(int j=0; j< heights[0].size(); j++)
            {
                if(pacific[i][j] and atlantic[i][j])
                    ans.push_back({i,j});
            }
        }

        return ans;

    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{1,2,2,3,5},{3,2,3,4,4},{2,4,5,3,1},{6,7,1,4,5},{5,1,1,2,4}};
    obj.pacificAtlantic(vec);
}

