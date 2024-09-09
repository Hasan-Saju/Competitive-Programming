#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>dp(n+1);
        dp[0] = 0;
        int offeset = 1;
        int next = 2;
        for(int i=1; i<=n; i++)
        {
            if(i==next)
            {
                offeset *= 2;
                next *=2;
            }
            dp[i] = 1 + dp[i - offeset];
        }
        return dp;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    vector<int>ans = obj.countBits(2);
    for(auto a:ans)
        cout<<a<<" ";
}

