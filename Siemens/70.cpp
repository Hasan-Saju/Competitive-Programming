#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int>dp;
    int recursion(int n)
    {
        if(n<=1)
            return 1;
        if(dp[n])
            return dp[n];

        return dp[n] = recursion(n-1)+recursion(n-2);
    }

    int climbStairs(int n)
    {
        dp.assign(n+5,0);
        dp[0]=1;
        return recursion(n);
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.climbStairs(3);
}

