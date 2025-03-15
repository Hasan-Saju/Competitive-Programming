#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int X[4] = {-1,1,0,0};
        int Y[4] = {0,0,-1,1};
        int ans = 0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                cout<<i<<" "<<j<<" ij\n";
                if(grid[i][j])
                {
                    int cellPeri=0;
                    for(int k=0; k<4; k++)
                    {
                        int nx = i+X[k];
                        int ny = j+Y[k];
                        cout<<nx<<" "<<ny<<" nxy\n";
                        if(nx<0 or ny<0 or nx>=grid.size() or ny>=grid[0].size())
                            cellPeri++;
                        else if(!grid[nx][ny])
                            cellPeri++;
                    }
                    ans+=cellPeri;
                }
            }
        }

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{1}};
    cout<<obj.islandPerimeter(vec);
}

