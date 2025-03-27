#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int X[4] = {1,-1,0,0};
    int Y[4] = {0,0,1,-1};
    int vis[105][105];
    int dis[105][105];
    int bfs(int x, int y, vector<vector<int>>& grid)
    {
        vis[x][y] = 1;
        dis[x][y] = 0;

        queue<int>Q;
        Q.push(x);
        Q.push(y);
        int ans;
        if(x==0 or y==0 or x==grid.size()-1 or y==grid[0].size()-1)
            ans = 0;
        else
            ans = 1;
        while(!Q.empty())
        {
            int ux, uy;
            ux = Q.front();
            Q.pop();
            uy = Q.front();
            Q.pop();

            cout<<ux<<" "<<uy<<"\n";
            for(int i=0; i<4; i++)
            {
                int vx, vy;
                vx = ux+X[i];
                vy = uy+Y[i];

                cout<<vx<<" "<<vy<<"\n";
                if(vx>=0 and vy>=0 and vx<grid.size() and vy<grid[0].size() and !vis[vx][vy] && !grid[vx][vy])
                {
                    cout<<"in\n";
                    //cout<<grid.size()-1<< " "<<grid[0].size()<<"\n";
                    if(vx==0 or vy==0 or vx==grid.size()-1 or vy==grid[0].size()-1)
                    {
                        ans=0;
                        //cout<<"here";
                    }
                    vis[vx][vy]=1;
                    dis[vx][vy] = dis[ux][uy]+1;
                    Q.push(vx);
                    Q.push(vy);
                }
            }
        }
        return ans;
    }
    int closedIsland(vector<vector<int>>& grid)
    {
        int result=0;
        memset(vis, 0, sizeof(vis));
        memset(dis, 0, sizeof(dis));
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(!grid[i][j] and !vis[i][j])
                {
                    result+=bfs(i,j, grid);
                    cout<<result<<"\n";
                }
            }
        }

        return result;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{0,0,1,0,0},{0,1,0,1,0},{0,1,1,1,0}};
    cout<<obj.closedIsland(vec);
}
