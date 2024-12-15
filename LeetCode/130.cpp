#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    queue<int>q;
    int vis[200][200];
    int X[4] = {1,-1,0,0};
    int Y[4] = {0,0,1,-1};
    void bfs(vector<vector<char>>& board)
    {
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            int v = q.front();
            q.pop();

            for(int i=0; i<4; i++)
            {
                int ux=u+X[i];
                int vx=v+Y[i];
                if(ux>0 and vx>0 and
                        ux<board.size() and vx <board[0].size() and
                        vis[ux][vx]==0 and board[ux][vx]=='O')
                {
                    vis[ux][vx] = 1;
                    board[ux][vx] = 'S';
                    q.push(ux);
                    q.push(vx);
                }
            }
        }
    }
    void solve(vector<vector<char>>& board)
    {
        memset(vis, 0, sizeof(vis));
        int row = board.size();
        int col = board[0].size();
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if((i==0||i==row-1||j==0||j==col-1) and board[i][j]=='O')
                {
                    board[i][j] = 'S';
                    q.push(i);
                    q.push(j);
                    vis[i][j]=1;
                }
            }
        }

        if(q.size())
            bfs(board);
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(board[i][j] == 'O')
                    board[i][j] = 'X';
                else if(board[i][j] == 'S')
                    board[i][j] = 'O';
            }
        }

    }
};
int main()
{
    Solution obj;
    vector<vector<char>>vec = {{'X','O','X'},
        {
            'X','O','X',
        },
        {
            'X','O','X',
        },

    };
    obj.solve(vec);
}

//["X","X","X","X"],["X","O","O","X"],["X","X","O","X"],["X","O","X","X"]]
