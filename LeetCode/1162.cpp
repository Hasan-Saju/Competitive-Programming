#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int vis[105][105];
    int dis[105][105];
    int X[4] = {1,-1,0,0};
    int Y[4] = {0,0,1,-1};
    map<pair<int, int>, int>result;
    void bfs(int x, int y, vector<vector<int>>& grid)
    {
        vis[x][y] = 1;
        dis[x][y] = 0;
        queue<int>Q;
        Q.push(x);
        Q.push(y);

        while(!Q.empty())
        {
            int ux = Q.front();
            Q.pop();
            int uy = Q.front();
            Q.pop();

            //cout<<" bfs out "<<ux<<" "<<uy<<"\n";
            for(int i=0; i<4; i++)
            {
                int vx = ux + X[i];
                int vy = uy + Y[i];
                //cout<<" bfs options "<<vx<<" "<<vy<<"\n";

                if(vx>=0 and vy>=0 and vx<grid.size() and vy<grid[0].size() and
                        !vis[vx][vy] and !grid[vx][vy])
                {
                    //cout<<" bfs in "<<vx<<" "<<vy<<"\n";
                    vis[vx][vy] = 1;
                    dis[vx][vy] = dis[ux][uy]+1;

                    if(result[ {vx, vy}])
                        result[ {vx, vy}] = min (result[ {vx, vy}], dis[vx][vy]);
                    else
                        result[ {vx, vy}] = dis[vx][vy];

                    Q.push(vx);
                    Q.push(vy);
                }
            }

        }
    }
    int maxDistance(vector<vector<int>>& grid)
    {

        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                memset(vis, 0, sizeof(vis));
                memset(dis, 0, sizeof(dis));
                if(grid[i][j])
                    bfs(i, j, grid);
            }
        }

        int ans = INT_MIN;
        for(auto x: result)
        {
            //cout<<x.first.first<<" "<<x.first.second<<" "<<x.second<<" \n";
            ans = max(ans, x.second);
        }

        if(ans==INT_MIN)
            ans=-1;
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{1,0,0},{0,0,0},{0,0,0}};
    cout<<obj.maxDistance(vec);
}
