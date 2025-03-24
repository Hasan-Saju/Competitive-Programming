#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        vector<vector<int>>dp(m+1, vector<int>(n+1,0));
        dp[m][n-1]=1;
        for(int i=m-1; i>=0; i--)
        {
            for(int j=n-1; j>=0; j--)
            {
                dp[i][j] = dp[i+1][j] + dp[i][j+1];
            }
        }

        for(int i=m; i>=0; i--)
        {
            for(int j=n; j>=0; j--)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        return dp[0][0];
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.uniquePaths(3,7);
}

