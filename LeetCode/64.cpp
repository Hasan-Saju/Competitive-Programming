#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minPathSum(vector<vector<int>>& grid)
    {
        int row = grid.size(), col = grid[0].size();
        vector<vector<int>>dp(row+1, vector<int>(col+1, INT_MAX));
        dp[row-1][col]=0, dp[row][col-1]=0;

        for(int i=row-1; i>=0; i--)
            for(int j=col-1; j>=0; j--)
                dp[i][j] = grid[i][j] + min(dp[i+1][j], dp[i][j+1]);

        return dp[0][0];
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{1,3,1},{1,5,1},{4,2,1}};
    obj.minPathSum(vec);
}
