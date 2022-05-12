#include<bits/stdc++.h>
using namespace std;

class Solution
{
    int vis[310][310];
    int dis[310][310];
    int X[4]= {1,0,0,-1};
    int Y[4]= {0,1,-1,0};
    int row,col;

public:

    void bfs(int x,int y, vector<vector<char>>& grid)
    {
        // cout<<"In"<<endl;
        vis[x][y]=1;
        dis[x][y]=0;// root er level 0
        queue<int>Q;
        Q.push(x);
        Q.push(y);
        while(!Q.empty())
        {
            //  cout<<"In"<<endl;
            int ux,uy;
            ux=Q.front();
            Q.pop();
            uy=Q.front();
            Q.pop();

            for(int i=0; i<4; i++)
            {
                int vx,vy;
                vx=ux+X[i];
                vy=uy+Y[i];
                if((vx>=0&&vy>=0)&&(vx<row&&vy<col)&&grid[vx][vy]=='1')
                {
                    if(!vis[vx][vy] and !dis[vx][vy])
                    {
                        vis[vx][vy]=1;
                        dis[vx][vy]=dis[ux][uy]+1;
                        Q.push(vx);
                        Q.push(vy);
                        //  cout<<dis[vx][vy]<<" ";
                    }
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid)
    {
        int ans=0;
        memset(vis,0,sizeof(vis));
        row=grid.size();
        col=grid[0].size();
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[i].size(); j++)
            {
                if(grid[i][j]=='1' and vis[i][j]==0)
                {
                    bfs(i,j,grid);
                    ans++;
                }
            }
        }

        return ans;
    }
};

int main()
{
    vector<vector<char> > grid
    {
        {'1','1','1','0','0'},
        {'1','1','0','1','0'},
        {'1','1','0','0','1'},
        {'0','0','0','0','1'}
    };

    Solution obj;
    cout<<obj.numIslands(grid);

}
