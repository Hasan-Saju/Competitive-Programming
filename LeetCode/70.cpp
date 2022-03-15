#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dp[50];
    int climbStairs(int n) {
        if(n<=1)return 1;
        if(dp[n])return dp[n];
        dp[n]= climbStairs(n-1)+climbStairs(n-2);
        return dp[n];
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    int n=2;
    cout<<obj.climbStairs(n);
}


