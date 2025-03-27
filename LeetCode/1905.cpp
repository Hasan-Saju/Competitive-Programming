#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int vis[505][505];
    int dis[505][505];
    int X[4]= {1,-1,0,0};
    int Y[4]= {0,0,1,-1};

    int bfs(int x, int y, vector<vector<int>>& grid1, vector<vector<int>>& grid2)
    {
        vis[x][y] = 1;
        dis[x][y] = 1;
        queue<int>q;

        q.push(x);
        q.push(y);

        int same = 1;

        if(grid1[x][y]!=grid2[x][y])
            same = 0;
        while(!q.empty())
        {
            int ux = q.front();
            q.pop();
            int uy = q.front();
            q.pop();

            for(int i=0; i<4; i++)
            {
                int vx = ux+X[i];
                int vy = uy+Y[i];

                if(vx>=0 and vy>=0 and vx<grid2.size() and vy<grid2[0].size() and !vis[vx][vy] and grid2[vx][vy])
                {
                    if(grid1[vx][vy]!=grid2[vx][vy])
                        same = 0;
                    vis[vx][vy] = 1;
                    dis[vx][vy] = dis[ux][uy]+1;
                    q.push(vx);
                    q.push(vy);
                }
            }

        }
        return same;
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2)
    {
        int ans=0;
        memset(vis, 0, sizeof(vis));
        memset(dis, 0, sizeof(dis));
        for(int i=0; i<grid2.size(); i++)
        {
            for(int j=0; j<grid2[0].size(); j++)
            {
                if(!vis[i][j] and grid2[i][j])
                    ans+=bfs(i,j, grid1, grid2);
            }
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec1 = {{1,1,1,1,0,0},{1,1,0,1,0,0},{1,0,0,1,1,1},{1,1,1,0,0,1},{1,1,1,1,1,0},{1,0,1,0,1,0},{0,1,1,1,0,1},{1,0,0,0,1,1},{1,0,0,0,1,0},{1,1,1,1,1,0}};

    vector<vector<int>>vec2 = {{1,1,1,1,0,1},{0,0,1,0,1,0},{1,1,1,1,1,1},{0,1,1,1,1,1},{1,1,1,0,1,0},{0,1,1,1,1,1},{1,1,0,1,1,1},{1,0,0,1,0,1},{1,1,1,1,1,1},{1,0,0,1,0,0}};

    cout<<obj.countSubIslands(vec1, vec2);
}
