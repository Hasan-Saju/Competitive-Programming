#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int>row,col;
        for(int i=0;i<grid.size();i++)
        {
            int maxx=0;
            for(int j=0;j<grid[i].size();j++)
            {
                maxx=max(maxx,grid[i][j]);
            }
            row.push_back(maxx);
        }

        for(int i=0;i<grid.size();i++)
        {
            int maxx=0;
            for(int j=0;j<grid[i].size();j++)
            {
                maxx=max(maxx,grid[j][i]);
            }
            col.push_back(maxx);
        }

        int sum=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
               sum += min(row[i],col[j]) - grid[i][j];
            }

        }

        cout<<sum;

        return sum;

    }
};

int main()
{
    Solution obj;
     vector<vector<int>> vect
    {
        {3, 0, 8, 4},
        {2,4,5,7},
        {9,2,6,3},
        {0,3,1,0},
    };
    obj.maxIncreaseKeepingSkyline(vect);
}


