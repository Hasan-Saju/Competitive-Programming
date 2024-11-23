#include<bits/stdc++.h>
using namespace std;
class Solution {
    int visited[15][15];
    int distance[15][15];
public:
    int bfs(int x, int y, vector<vector<int>>& grid)
    {
        cout<<"\nbfs\n";
        cout<<x<<" "<<y<<"\n\n";
        queue<int>q;
        visited[x][y]=1;
        distance[x][y] = 0;
        q.push(x);
        q.push(y);

        int depth = 0;

        int row = grid.size();
        int col = grid[0].size();
        cout<<row<<" "<<col<<" row col \n";

        int X[4] = {0, 0, 1, -1};
        int Y[4] = {1, -1, 0, 0};

        while(!q.empty())
        {
            int ux = q.front();
            q.pop();
            int uy = q.front();
            q.pop();

            for(int i=0;i<4;i++)
            {
                int nx = ux+X[i];
                int ny = uy+Y[i];
                cout<<nx<<"  out bfs "<<ny<<" "<<!visited[nx][ny]<<" "<< grid[nx][ny]<<"\n";
                if(nx>=0 and ny>=0 and nx<row and ny<col and visited[nx][ny]==0 and grid[nx][ny]==1)
                {
                    cout<<nx<<" in bfs "<<ny<<"\n";
                    visited[nx][ny] = 1;
                    distance[nx][ny] = distance[ux][uy] + 1;
                    cout<<distance[nx][ny]<<"\n";
                    q.push(nx);
                    q.push(ny);

                    depth = max(depth, distance[nx][ny]);
                }
            }
            cout<<" sz "<<q.size()<<"\n";
        }
        return depth;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int ans = 0;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid[i][j]==2)
                    ans = max(ans, bfs(i,j,grid));
            }
        }

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid[i][j]==1 and !visited[i][j])
                    return -1;
            }
        }

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{2,1,1},{1,1,0},{0,1,1}};
    cout<<obj.orangesRotting(vec);
}

