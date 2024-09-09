#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int recurse(string s, vector<int>& dp, int ind)
    {
        //cout<<s[ind]<<"\n";
        if(ind>=s.size())
            return 1;
        if(s[ind]=='0')
            return 0;
        if(dp[ind]!=-1)
            return dp[ind];

        int result = recurse(s, dp, ind+1);
        if(ind+1<s.size() && ((s[ind]=='1') or (s[ind]=='2' && s[ind+1] - '0'<=6 ) ) )
            result += recurse(s, dp, ind+2);

        return dp[ind] = result;
    }

    int numDecodings(string s) {
        vector<int>dp(s.size(), -1);
        return recurse(s,dp,0);
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.numDecodings("12");
}

