#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int recursion(int n, vector<int>& dp)
    {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        if(n==2)
            return 1;
        if(dp[n])
            return dp[n];

        dp[n] = recursion(n-1, dp)+recursion(n-2, dp)+recursion(n-3, dp);
        return dp[n];
    }
    int tribonacci(int n)
    {
        vector<int>dp(45,0);
        return recursion(n, dp);
    }
};

int main()
{
    Solution obj;
    vector<string>vec = {"01", "10"};
    cout<<obj.tribonacci(25);
}
