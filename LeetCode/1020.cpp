#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int vis[505][505];
    int X[4]= {1,-1,0,0};
    int Y[4]= {0,0,1,-1};
    int bfs(int x, int y, vector<vector<int>>& grid)
    {
        int kount=1;
        vis[x][y]=1;
        queue<int>Q;
        Q.push(x);
        Q.push(y);

        while(!Q.empty())
        {
            int ux=Q.front();
            Q.pop();
            int uy=Q.front();
            Q.pop();

            for(int i=0; i<4; i++)
            {
                int vx=ux+X[i];
                int vy=uy+Y[i];

                if(vx>=0 and vy>=0 and vx<grid.size() and vy<grid[0].size() and grid[vx][vy] and !vis[vx][vy])
                {
                    kount++;
                    vis[vx][vy]=1;
                    Q.push(vx);
                    Q.push(vy);
                }
            }
        }
        return kount;
    }
    int numEnclaves(vector<vector<int>>& grid)
    {
        int temp=0;
        int total=0;
        memset(vis, 0, sizeof(vis));
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j])
                    total++;
                if(grid[i][j] and !vis[i][j] and (i==0 or j==0 or i==grid.size()-1 or j==grid[0].size()-1))
                    temp+=bfs(i,j,grid);
            }
        }
        return total-temp;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{0,1,1,0},{0,0,1,0},{0,0,1,0},{0,0,0,0}};
    cout<<obj.numEnclaves(vec);
}
