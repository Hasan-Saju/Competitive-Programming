#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int recursion(int row, int col, vector<vector<int>>& triangle, vector<vector<int>>& dp)
    {
        if(row>=triangle.size()-1)
            return triangle[row][col];
        else if(dp[row][col]!=INT_MAX)
            return dp[row][col];
        dp[row][col] = triangle[row][col] + min(recursion(row+1, col, triangle, dp),
                                                recursion(row+1, col+1, triangle, dp));

        return dp[row][col];
    }
    int minimumTotal(vector<vector<int>>& triangle)
    {
        vector<vector<int>> dp(triangle.size(), vector<int>(triangle.size(), INT_MAX));
        return recursion(0, 0, triangle, dp);
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{2},{3,4},{6,5,7},{4,1,8,3}};
    cout<<obj.minimumTotal(vec);
}

