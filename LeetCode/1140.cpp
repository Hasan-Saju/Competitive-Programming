#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    vector<vector<vector<int>>>dp;
    int dfs(int alice, int ind, int m, vector<int>& piles)
    {
        if(ind>=piles.size())
            return 0;
        if(dp[alice][ind][m]!=-1)
            return dp[alice][ind][m];

        int total=0;
        int res = alice ? 0 : INT_MAX;
        for(int x=1; x<=2*m; x++)
        {
            if(ind+x>piles.size())
                break;
            total+=piles[ind+x-1];

            if(alice)
                res = max(res, total+dfs(!alice, ind+x, max(m,x), piles));
            else
                res = min(res, dfs(!alice, ind+x, max(m,x), piles));
        }
        dp[alice][ind][m] = res;
        return dp[alice][ind][m];
    }
public:
    int stoneGameII(vector<int>& piles)
    {
        int n = piles.size();
        dp.resize(2, vector<vector<int>>(n, vector<int>(n+1,-1)));
        return dfs(1, 0, 1, piles);
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,9,4,4};
    cout<<obj.stoneGameII(vec);
}

