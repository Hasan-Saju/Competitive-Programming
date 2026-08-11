#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int>dp;

    int recursion(int i, string s)
    {
        //cout<<i<<endl;
        if(i>=s.size())
            return 1;
        else if(s[i]=='0')
            return 0;
        if(dp[i]!=-1)
            return dp[i];

        int res = recursion(i+1, s);
        if(i+1<s.size())
        {
            int val = (s[i]-'0')*10 + s[i+1]-'0';
            if(val>=10 and val<=26)
                res+= recursion(i+2, s);
        }
        return dp[i] = res;
    }
    int numDecodings(string s)
    {
        dp.assign(105, -1);
        int ans = recursion(0,s);
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.numDecodings("226");
}

