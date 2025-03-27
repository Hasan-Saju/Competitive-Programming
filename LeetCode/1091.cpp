#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int dis[105][105];
    int vis[105][105];
    int X[8] = {1,-1,0,0,1,-1, 1, -1};
    int Y[8] = {0,0,1,-1,-1, 1, 1, -1};
    void bfs(int x, int y, vector<vector<int>>& grid)
    {
        //cout<<"here\n";
        vis[x][y] = 1;
        dis[x][y] = 1;
        queue<int>Q;
        Q.push(x);
        Q.push(y);

        while(!Q.empty())
        {
            int ux = Q.front();
            Q.pop();
            int uy = Q.front();
            Q.pop();

            for(int i=0; i<8; i++)
            {
                int vx = ux+X[i];
                int vy = uy+Y[i];

                if(vx>=0 and vy>=0 and vx<grid.size() and vy<grid[0].size() and !grid[vx][vy] and !vis[vx][vy])
                {
                    vis[vx][vy] = 1;
                    dis[vx][vy] = dis[ux][uy]+1;

                    Q.push(vx);
                    Q.push(vy);
                }
            }
        }
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid)
    {
        int rowN=grid.size();
        int colN=grid[0].size();
        memset(vis, 0, sizeof(vis));
        memset(dis, 0, sizeof(dis));
        if(grid[0][0] or grid[rowN-1][colN-1])
            return -1;
        bfs(0,0, grid);
        return !dis[rowN-1][colN-1] ? -1 : dis[rowN-1][colN-1];
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{0}};
    cout<<obj.shortestPathBinaryMatrix(vec);
}

