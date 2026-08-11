#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int>dp;
    int numOfWays(int i, string& s)
    {
        if(i>=s.size())
            return 1;
        if(s[i]=='0')
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int way = 0;
        int num = s[i]-'0';
        if(num>=1 and num<=9)
            way = numOfWays(i+1, s);
        if(i+1<s.size())
        {
            int num2 = (s[i]-'0')*10 + s[i+1]-'0';
            if(num2>=10 and num2<=26)
                way += numOfWays(i+2, s);
        }

        return dp[i] = way;
    }
    int numDecodings(string s)
    {
        dp.assign(s.size()+5,-1);
        return numOfWays(0,s);
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.numDecodings("06");
}

