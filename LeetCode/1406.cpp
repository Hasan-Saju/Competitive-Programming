#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    vector<vector<int>>dp;
    int dfs(int alice, int ind, vector<int>& stoneValue)
    {
        if(ind>=stoneValue.size())
            return 0;
        if(dp[alice][ind]!=-1)
            return dp[alice][ind];
        int res = alice ? INT_MIN:INT_MAX;
        int temp=0;
        for(int i=0; i<3; i++)
        {
            if(ind+i>=stoneValue.size())
                break;
            temp+=stoneValue[ind+i];
            if(alice)
                res = max(res, temp + dfs(!alice, ind+i+1, stoneValue));
            else
                res = min(res, dfs(!alice, ind+i+1, stoneValue));
            cout<<alice<<" "<<ind<<" "<<res<<endl;
        }
        dp[alice][ind] = res;
        return dp[alice][ind];
    }
public:
    string stoneGameIII(vector<int>& stoneValue)
    {
        dp.resize(2, vector<int>(stoneValue.size(), -1));

        int alice = dfs(1, 0, stoneValue);
        int total = 0;
        for(auto x:stoneValue)
            total+=x;
        return 2*alice>total ? "Alice" : 2*alice<total ? "Bob" : "Tie";
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {-1, -2, -3};
    cout<<obj.stoneGameIII(vec);
}

