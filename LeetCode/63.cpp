#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid)
    {
        int row = obstacleGrid.size(), col = obstacleGrid[0].size();
        vector<vector<long>>dp(row+1, vector<long>(col+1, 0));
        dp[row][col-1]=1;
        for(int i=row-1; i>=0; i--)
        {
            for(int j=col-1; j>=0; j--)
            {
                if(obstacleGrid[i][j])
                {
                    dp[i][j]=0;
                    continue;
                }
                dp[i][j] = dp[i+1][j] + dp[i][j+1];
            }
        }
        return dp[0][0];
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{0,0,0},{0,1,0},{0,0,0}};
    cout<<obj.uniquePathsWithObstacles(vec);
}
