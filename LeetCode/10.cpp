#include<bits/stdc++.h>
using namespace std;
class Solution
{
    vector<vector<int>> dp;

public:
    bool isMatch(string s, string p)
    {
        int m = s.length(), n = p.length();
        dp.assign(m + 1, vector<int>(n + 1, -1));
        return dfs(0, 0, s, p, m, n);
    }

private:
    bool dfs(int i, int j, string& s, string& p, int m, int n)
    {
        if (j == n and i==m)
        {
            return true;
        }
        if(j==n)
            return false;

        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }
        bool match = i < m && (s[i] == p[j] || p[j] == '.');
        if (j + 1 < n && p[j + 1] == '*')
        {
            dp[i][j] = dfs(i, j + 2, s, p, m, n) ||
                       (match && dfs(i + 1, j, s, p, m, n));
        }
        else if(match)
        {
            dp[i][j] = dfs(i + 1, j + 1, s, p, m, n);
        }
        else
            dp[i][j] = false;
        return dp[i][j];
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.twoSum(vec);
}
