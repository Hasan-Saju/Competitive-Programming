#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int>dp;
    int recursion(int n)
    {
        //cout<<n<<" "<<dp[n]<<endl;
        if(n==0)
            return 1;
        else if(n<0)
            return 0;
        else if(dp[n]!=-1)
            return dp[n];

        return dp[n] = recursion(n-1) + recursion(n-2);
    }
    int climbStairs(int n)
    {
        dp.assign(n+5,-1);
        recursion(n);
        return dp[n];
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.climbStairs(3);
}

