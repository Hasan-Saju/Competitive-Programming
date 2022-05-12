#include<bits/stdc++.h>
using namespace std;

class Solution {
    int dp[105][105];
public:
    int uniquePaths(int m, int n) {
        if(dp[m][n])
            return dp[m][n];
        if (m==1 or n==1)
            return 1;
        else
            return dp[m][n] = uniquePaths(m-1,n) + uniquePaths(m,n-1);
    }
};

int main()
{
    Solution obj;
    //vector<int>vec = {2,7,11,15};
    cout<<obj.uniquePaths(3, 7);
}


