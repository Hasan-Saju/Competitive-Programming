#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countServers(vector<vector<int>>& grid)
    {
        int rows = grid.size();
        int cols = grid[0].size();

        map<int, int>rw;
        map<int, int>cl;

        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                if(grid[i][j])
                {
                    rw[i]++;
                    cl[j]++;
                }
            }
        }

        int connected = 0;
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                if(grid[i][j] and ( (rw.count(i) and  rw[i]>1) or (cl.count(j) and cl[j]>1)) )
                {
                    connected++;
                }
            }
        }

        return connected;

    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = { {1,0}, {1,1} };
    cout<<obj.countServers(vec);
}

