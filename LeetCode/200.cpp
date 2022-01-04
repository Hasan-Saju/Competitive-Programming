#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int bfs(int x, int y)
    {

    }

    int numIslands(vector<vector<char>>& grid)
    {
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[i].size(); j++)
            {
                if(grid[i][j]=='1')
                {
                    bfs(i,j);
                    ans++;
                }
            }
        }

        return 0;
    }
};

int main()
{
    vector<vector<char> > grid
    {
        {'1','1','1','1','0'},
        {'1','1','0','1','0'},
        {'1','1','0','0','0'},
        {'0','0','0','0','0'}
    };

    Solution obj;
    obj.numIslands(grid);

}
