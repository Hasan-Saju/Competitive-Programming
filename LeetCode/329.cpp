#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    vector<vector<int>>dp;
    vector<vector<int>>dirs = {{-1,0},{1,0}, {0,1}, {0,-1} };

    int dfs(int r, int c, int prev, vector<vector<int>>& matrix)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();
        if(r<0 or r>=rows or c<0 or c>=cols or matrix[r][c]<=prev)
            return 0;
        if(dp[r][c]!=-1)
            return dp[r][c];

        int res=0;
        for(auto dir: dirs)
        {
            res = max(res, 1+dfs(r+dir[0], c+dir[1], matrix[r][c], matrix));
        }
        dp[r][c] = res;
        return dp[r][c];
    }
public:
    int longestIncreasingPath(vector<vector<int>>& matrix)
    {

        int rows = matrix.size();
        int cols = matrix[0].size();

        dp.resize(rows, vector<int>(cols, -1));

        int lip=INT_MIN;

        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                lip = max(lip, dfs(i, j, INT_MIN, matrix));
            }
        }

        return lip;
    }
};

int main()
{
    Solution obj;
    vector<vector<int>>vec = {{3,4,5},{3,2,6},{2,2,1}};
    cout<<obj.longestIncreasingPath(vec);
}

