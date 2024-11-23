#include<bits/stdc++.h>
using namespace std;
class Solution
{
    queue<pair<int,int> >q;
    int vis[51][51]= {0};
    vector<int> X = {1, 0, 0, -1};
    vector<int> Y = {0, 1, -1, 0};


public:
    int bfs(vector<vector<int>>& grid, int i, int j)
    {
        q.push(make_pair(i, j));
        int ans=1;
        vis[i][j] = 1;
        while(!q.empty())
        {
            auto [x,y] = q.front();
            q.pop();

            for(int i=0; i<4; i++)
            {
                int nx = x+X[i];
                int ny = y+Y[i];

                if(nx>=0 and nx<grid.size() and ny>=0 and ny<grid[0].size() and !vis[nx][ny] and grid[nx][ny]==1)
                {
                    vis[nx][ny]=1;
                    ans++;
                    q.push(make_pair(nx,ny));
                }
            }
        }
        return ans;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid)
    {
        int result=0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j]==1 && !vis[i][j])
                    result = max(result, bfs(grid, i, j));
            }
        }
        return result;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec =
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
    cout<<obj.maxAreaOfIsland(vec);
}
