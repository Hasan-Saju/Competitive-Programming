#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    void bfs(int i, int j, vector<vector<int>>& grid)
    {
        vector<vector<int>>vis(grid.size(), vector<int>(grid[0].size(), 0));
        vis[i][j]=1;

        int X[4] = {1,-1,0,0};
        int Y[4] = {0,0,1,-1};

        queue<int>q;
        q.push(i);
        q.push(j);

        while(!q.empty())
        {
            int x = q.front();
            q.pop();
            int y = q.front();
            q.pop();

            for(int k=0; k<4; k++)
            {
                int nx= x+X[k];
                int ny = y+Y[k];

                if(nx>=0 and nx<grid.size() and ny>=0 and ny<grid[0].size() and grid[nx][ny]!=0 and grid[nx][ny]!=-1 and !vis[nx][ny])
                {
                    vis[nx][ny] = 1;
                    grid[nx][ny] = min(grid[x][y]+1, grid[nx][ny]);
                    q.push(nx);
                    q.push(ny);
                }
            }
        }

    }
public:
    void islandsAndTreasure(vector<vector<int>>& grid)
    {
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j]==0)
                {
                    bfs(i,j,grid);
                }
            }
        }

        for(auto r:grid)
        {
            for(auto c:r)
            {
                cout<<c<<" ";
            }
            cout<<"\n";
        }
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec =
    {
        {2147483647,-1,0,2147483647},
        {2147483647,2147483647,2147483647,-1},
        {2147483647,-1,2147483647,-1},
        {0,-1,2147483647,2147483647}
    };
    obj.islandsAndTreasure(vec);
}

