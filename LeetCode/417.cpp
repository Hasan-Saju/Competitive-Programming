#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void dfs(vector<vector<int>>& heights, vector<vector<int>>& ocean, int x, int y, int rows, int cols)
    {
        int X[4] = {1, -1, 0, 0};
        int Y[4] = {0, 0, 1, -1};

        ocean[x][y] = 1;

        for(int i=0; i<4; i++)
        {
            int nx = x + X[i];
            int ny = y + Y[i];

            if(nx>=0 and ny>=0 and nx<rows and ny<cols and !ocean[nx][ny] and heights[x][y]<=heights[nx][ny])
                dfs(heights, ocean, nx, ny, rows, cols);
        }
    }


    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights)
    {
        vector<vector<int>>result;
        int rows = heights.size();
        int cols = heights[0].size();

        vector<vector<int>>pacific(rows, vector<int>(cols,0));
        vector<vector<int>>atlantic(rows, vector<int>(cols,0));

        for(int i=0; i<rows; i++)
        {
            dfs(heights, pacific, i, 0, rows, cols);
            dfs(heights, atlantic, i, cols-1, rows, cols);
        }
        for(int i=0; i<cols; i++)
        {
            dfs(heights, pacific, 0, i, rows, cols);
            dfs(heights, atlantic, rows-1, i, rows, cols);
        }

        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                if(pacific[i][j] and atlantic[i][j])
                {
                    cout<<i<<" "<<j<<"\n";
                    result.push_back({i,j});
                }

            }
        }

        return result;

    }
};

int main()
{
    Solution obj;
    vector<vector<int> >vec{{1,2,2,3,5},{3,2,3,4,4},{2,4,5,3,1},{6,7,1,4,5},{5,1,1,2,4}};
    obj.pacificAtlantic(vec);
}
