#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int vis[255][255];
    int dis[255][255];
    queue<int>q;
    const int INF = 2147483647;

    void bfs(vector<vector<int>>& rooms)
    {
        int X[4] = {1,-1,0,0};
        int Y[4] = {0,0,1,-1};
        while(!q.empty())
        {
            int ux = q.front();
            q.pop();
            int uy = q.front();
            q.pop();

            vis[ux][uy] = 1;

            for(int i=0; i<4; i++)
            {
                int vx = ux+X[i];
                int vy = uy+Y[i];

                if( (vx>=0 and vy>=0) and
                        (vx<rooms.size() and vy<rooms[0].size()) and rooms[vx][vy]!=-1 and
                        rooms[vx][vy]!=0 and !vis[vx][vy])
                {
                    vis[vx][vy]=1;
                    rooms[vx][vy] = rooms[ux][uy]+1;

                    q.push(vx);
                    q.push(vy);

                    cout<<vx<<" "<<vy<<" "<<rooms[vx][vy]<<endl;
                }
            }

        }
    }
    void wallsAndGates(vector<vector<int>>& rooms)
    {


        for(int i=0; i<rooms.size(); i++)
        {
            for(int j=0; j<rooms[0].size(); j++)
            {
                if(rooms[i][j]==0)
                {
                    q.push(i);
                    q.push(j);
                }
            }
        }

        bfs(rooms);
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    //obj.twoSum(vec);
    vector<vector<int>> rooms =
    {
        {2147483647, -1, 0, 2147483647},
        {2147483647, 2147483647, 2147483647, -1},
        {2147483647, -1, 2147483647, -1},
        {0, -1, 2147483647, 2147483647}
    };

    obj.wallsAndGates(rooms);
}

