#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int vis[105][105];
    int dis[105][105];
    int X[4] = {1,-1,0,0};
    int Y[4] = {0,0,1,-1};
    int ans = INT_MAX;
    void bfs(int x, int y, int landNum, queue<int>q, int gridVal, int finalBfs, vector<vector<int>>& grid)
    {
        dis[x][y] = 0;
        vis[x][y] = landNum;
        q.push(x);
        q.push(y);

        while(!q.empty())
        {
            int ux = q.front();
            q.pop();
            int uy = q.front();
            q.pop();

            for(int i=0; i<4; i++)
            {
                int vx = ux + X[i];
                int vy = uy + Y[i];
                if(finalBfs)
                {
                    if(vx>=0 and vy>=0 and vx<grid.size() and vy<grid[0].size() and vis[vx][vy]==3)
                        ans = min(ans, dis[ux][uy]);
                }

                if(vx>=0 and vy>=0 and vx<grid.size() and vy<grid[0].size() and grid[vx][vy]==gridVal and !vis[vx][vy])
                {
                    vis[vx][vy] = landNum;
                    dis[vx][vy] = dis[ux][uy]+1;
                    q.push(vx);
                    q.push(vy);
                }
            }
        }
    }
    int shortestBridge(vector<vector<int>>& grid)
    {

        int landNo = 2;
        queue<int>Q;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(!vis[i][j] and grid[i][j])
                {
                    bfs(i, j, landNo, Q, 1, 0, grid);
                    landNo++;
                }
            }
        }

        memset(dis,0, sizeof(dis));
        int sx, sy;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(vis[i][j]==2)
                {
                    Q.push(i);
                    Q.push(j);
                    dis[i][j]=0;
                }
            }
        }
        sx=Q.front();
        Q.pop();
        sy=Q.front();
        Q.pop();
        bfs(sx, sy, 1, Q, 0, 1, grid);

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{0,0,0,0,0,0,0,1,1},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,1,0,0},
        {0,0,0,0,0,1,1,1,0},
        {0,0,0,0,0,0,1,1,0},
        {0,0,0,0,0,0,1,1,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0}
    };
    cout<<obj.shortestBridge(vec);
}
