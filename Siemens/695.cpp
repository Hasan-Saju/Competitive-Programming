#include<bits/stdc++.h>
using namespace std;
class Solution
{
    int vis[55][55];
    int dis[55][55];
    int row, col;
    int X[4] = {1,-1,0,0};
    int Y[4] = {0,0,1,-1};

private:
    int bfs(int x, int y, vector<vector<int>>& grid)
    {
        queue<int>Q;
        Q.push(x);
        Q.push(y);

        vis[x][y] = 1;
        dis[x][y] = 0;

        int kount = 1;

        while( !Q.empty() )
        {
            int ux = Q.front();
            Q.pop();
            int uy = Q.front();
            Q.pop();

            for(int i=0; i<4; i++)
            {
                int vx = ux+X[i];
                int vy = uy+Y[i];

                if( (vx>=0 and vy>=0) and (vx<row and vy<col) and grid[vx][vy]==1 )
                {
                    if(!vis[vx][vy] and !dis[vx][vy])
                    {
                        vis[vx][vy] = 1;
                        dis[vx][vy] = dis[ux][uy] + 1;

                        Q.push(vx);
                        Q.push(vy);

                        kount++;
                    }
                }
            }
        }

        return kount;
    }

public:
    int maxAreaOfIsland(vector<vector<int>>& grid)
    {
        row = grid.size();
        col = grid[0].size();
        int ans = 0;

        memset(vis, 0, sizeof(vis));
        memset(dis, 0, sizeof(dis));

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(!vis[i][j] and grid[i][j]==1)
                {
                    //cout<<i<<" "<<j<<endl;
                    ans = max(ans, bfs(i,j,grid) );
                }
            }
        }

        return ans;
    }
};

int main()
{
    Solution obj;

    vector<vector<int>> grid =
    {
        {0,0,1,0,0,0,0,1,0,0,0,0,0},
        {0,0,0,0,0,0,0,1,1,1,0,0,0},
        {0,1,1,0,1,0,0,0,0,0,0,0,0},
        {0,1,0,0,1,1,0,0,1,0,1,0,0},
        {0,1,0,0,1,1,0,0,1,1,1,0,0},
        {0,0,0,0,0,0,0,0,0,0,1,0,0},
        {0,0,0,0,0,0,0,1,1,1,0,0,0},
        {0,0,0,0,0,0,0,1,1,0,0,0,0}
    };
    cout<<obj.maxAreaOfIsland(grid);
}
