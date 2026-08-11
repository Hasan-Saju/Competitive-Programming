#include<bits/stdc++.h>
using namespace std;
class Solution
{
    vector<vector<int>>vis;
public:
    int bfs(int i, int j, vector<vector<int>>& grid)
    {
        queue<int>q;

        vis[i][j]=1;
        int total = grid[i][j];
        q.push(i);
        q.push(j);
        int X[4] = {1,-1,0,0};
        int Y[4] = {0,0,1,-1};

        while(!q.empty())
        {
            int ux = q.front();
            q.pop();
            int uy = q.front();
            q.pop();

            for(int i=0; i<4; i++)
            {
                int vx = ux+X[i];
                int vy = uy +Y[i];

                if(vx>=0 and vx<grid.size() and vy>=0 and vy<grid[0].size() and
                        !vis[vx][vy] and grid[vx][vy])
                {
                    vis[vx][vy] = 1;
                    q.push(vx);
                    q.push(vy);

                    total+=grid[vx][vy];
                }

            }
        }
        return total;
    }

    int findMaxFish(vector<vector<int>>& grid)
    {
        int row = grid.size();
        int col = grid[0].size();

        vis.assign(row, vector<int>(col,0));

        int ans = 0;
        for(int i = 0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid[i][j] and !vis[i][j])
                {
                    ans = max(ans, bfs(i,j,grid));
                }
            }
        }

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = { {0,2,1,0}, {4,0,0,3}, {1,0,0,4}, {0,3,2,0} };
    cout<<obj.findMaxFish(vec);
}

